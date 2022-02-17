#pragma once

#ifdef CB_PLATFORM_WINDOWS
	#ifdef CB_BUILD_DLL
		#define COLDBREW_API __declspec(dllexport)
	#else
		#define COLDBREW_API __declspec(dllimport)
	#endif
#else
	#error ColdBrew only supports Windows!
#endif
