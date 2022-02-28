//========= Copyright Valve Corporation ============//

#include "openvr.h"

namespace vr
{

class IVRClientCore
{
public:
	/** Initializes the system */
	virtual EVRInitError Init( vr::EVRApplicationType eApplicationType, const char *pStartupInfo ) = 0;

	/** cleans up everything in vrclient.dll and prepares the DLL to be unloaded */
	virtual void Cleanup() = 0;

	/** checks to see if the specified interface/version is supported in this vrclient.dll */
	virtual EVRInitError IsInterfaceVersionValid( const char *pchInterfaceVersion ) = 0;

	/** Retrieves any interface from vrclient.dll */
	virtual void *GetGenericInterface( const char *pchNameAndVersion, EVRInitError *peError ) = 0;

	/** Returns true if any driver has an HMD attached. Can be called outside of Init/Cleanup */
	virtual bool BIsHmdPresent() = 0;

	/** Returns an English error string from inside vrclient.dll which might be newer than the API DLL */
	virtual const char *GetEnglishStringForHmdError( vr::EVRInitError eError ) = 0;

	/** Returns an error symbol from inside vrclient.dll which might be newer than the API DLL */
	virtual const char *GetIDForVRInitError( vr::EVRInitError eError ) = 0;
};

static const char * const IVRClientCore_Version = "IVRClientCore_003";


}
