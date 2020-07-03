#pragma once

#ifdef AIT_PLATFORM_WINDOWS
	#ifdef AIT_BUILD_DLL
		#define AITOMUS_API __declspec(dllexport)
	#else
		#define AITOMUS_API __declspec(dllimport)
	#endif
#else 
	#error Aitomus only support Windows!
#endif
