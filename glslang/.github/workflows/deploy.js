module.exports = async ({github, context, core}) => {
    try {
        await github.rest.git.updateRef({
            owner: context.repo.owner,
            repo: context.repo.repo,
            ref: 'tags/master-tot',
            sha: context.sha
        })
    } catch (error) {
        core.setFailed(`upload master-tot tag; ${error.name}; ${error.message}`)
    }

    let release
    try {
        release = await github.rest.repos.getReleaseByTag({
            owner: context.repo.owner,
            repo: context.repo.repo,
            tag: 'master-tot'
        })
    } catch (error) {
        core.setFailed(`get the master release; ${error.name}; ${error.message}`)
    }

    try {
        await github.rest.repos.updateRelease({
            owner: context.repo.owner,
            repo: context.repo.repo,
            release_id: release.data.id
        })
    } catch (error) {
        core.setFailed(`update the master release; ${error.name}; ${error.message}`)
    }

    let release_assets
    try {
        release_assets = await github.rest.repos.listReleaseAssets({
            owner: context.repo.owner,
            repo: context.repo.repo,
            release_id: release.data.id
        })
    } catch (error) {
        core.setFailed(`list release assets; ${error.name}; ${error.message}`)
    }

    const { ARCHIVE } = process.env
    for (const release_asset of release_assets.data) {
        if (release_asset.name === `${ ARCHIVE }`) {
            try {
                await github.rest.repos.deleteReleaseAsset({
                    owner: context.repo.owner,
                    repo: context.repo.repo,
                    asset_id: release_asset.id
                })
            } catch (error) {
                core.setFailed(`delete ${ ARCHIVE }; ${error.name}; ${error.message}`)
            }
        }
    }

    try {
        const asset_path = `./build/install/${ ARCHIVE }`
        const fs = require("fs")
        await github.rest.repos.uploadReleaseAsset({
            owner: context.repo.owner,
            repo: context.repo.repo,
            release_id: release.data.id,
            name: `${ ARCHIVE }`,
            data: fs.readFileSync(asset_path)
        })
    } catch (error) {
        core.setFailed(`upload ${ ARCHIVE }; ${error.name}; ${error.message}`)
    }
}
