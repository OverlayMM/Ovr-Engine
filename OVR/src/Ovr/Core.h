#pragma once

#ifdef OV_PLATFORM_WINDOWS
	#ifdef OV_BUILD_DLL
		#define OVR_API __declspec(dllexport)
	#else
		#define OVR_API __declspec(dllimport)
	#endif

#else
	#error Ovr-Engine only supports windows as of this update
#endif
