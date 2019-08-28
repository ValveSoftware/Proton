This is my build of Proton which the most recent release of vanilla wine, has ffmpeg enabled for faudio by default, and all of Proton's patches ported over to be applied to vanilla wine.

All patches:  
-Warframe launcher loop patch  
-DXVK Async patch applied and enabled specifically for warframe and poe
-Mech Warrior online patch  
-Resident Evil 4 patch  
-World of Final Fantasy patch  
-Skyrim SE/Fallout 4 script extender patch  
-d9vk integration - 
-protonfixes integration
-FAudio with FFMpeg enabled (fixes audio/voices in multiple games)  
-All of Valve's wine proton patches. Yes. All of them. 

Building Proton in a nutshell:  

1. Install virtualbox and its kernel modules, make sure they are enabled at boot  
2. Install vagrant  
3. Clone this repo:  
`git clone --recurse-submodules http://github.com/gloriouseggroll/proton-ge-custom`  

4. Drop any custom patches into game-patches-testing/, then open game-patches-testing/proton-prep.sh and  
 add a patch line for them under #WINE CUSTOM PATCHES in the same way the others are done. 

5. Apply all of the patches in /game patches/testing by running:
```
./game-patches-testing/proton-prep.sh &> patchlog.txt
``` 
in the main proton-ge-custom directory. Open patchlog.txt and search "fail" to make sure no patch failures occured.

6. in a terminal and type:  

`vagrant up` (this will take a while on the first run, as it prepares everything)  
`vagrant ssh` (this will ssh you into the vagrant VM  

To leave the VM at any time just type `exit`  

NOTE ON MODIFICATIONS:  
vagrant syncs the proton directory to any files in the cloned repo. So, if you want to make changes, close the VM with `vagrant halt`, make your changes, then launch vagrant again with `vagrant up`  

7. Edit the build name and build proton  
```
cd ~/build
nano Makefile
```
Change the BUILD_NAME to whatever you want, then save & exit  

8. Build proton  
```
cd ~/build
make all dist
```
9. Rename the dist folder to your BUILD_NAME, then tar it for easier distribution:  
```
mv dist Proton-Custom-Name
tar -cvzf Proton-Custom-Name.tar.gz Proton-Custom-Name/
```

10. Move it to the /vagrant folder. This folder is accessible on your main system in the vagrant_share folder inside the cloned repository folder:  

`mv Proton-Custom-Name.tar.gz /vagrant/`  

11. Shut down the VM:  
```
exit
vagrant halt
```

12. Now open vagrant_share inside the cloned repo folder on your main system. Extract the tarball into `~/.steam/root/compatibilitytools.d/`, and restart steam. You will have to create the compatibilitytools.d folder.  


Credits to the proper people are deserved. Many people besides myself have contributed to various parts:

https://github.com/ValveSoftware/Proton  
https://github.com/wine-mirror/wine  
https://github.com/wine-staging/wine-staging  
https://github.com/doitsujin/dxvk  
https://github.com/Joshua-Ashton/d9vk  
https://github.com/Tk-Glitch/PKGBUILDS/tree/master/wine-tkg-git/wine-tkg-patches  
https://github.com/simons-public/protonfixes  
