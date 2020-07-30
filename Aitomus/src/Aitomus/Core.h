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

#ifdef AIT_ENABLE_ASSERTS
	#define AIT_ASSERT(x, ...) {if(!(x)){AIT_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak();}}
	#define AIT_CORE_ASSERT(x, ...){if(!(x)){AIT_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak();}}
#else 
	#define AIT_ASSERT(x, ...)
	#define AIT_CORE_ASSERT(x, ...)
#endif


#define BIT(x) (1 << x)
