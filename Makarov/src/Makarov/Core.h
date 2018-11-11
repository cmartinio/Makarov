#pragma once

#ifdef MK_PLATFORM_WINDOWS
	#ifdef MK_BUILD_DLL
		#define MAKAROV_API __declspec(dllexport)
	#else
#define MAKAROV_API __declspec(dllimport)
	#endif
#else
	#error Makarov only support Windows!
#endif
