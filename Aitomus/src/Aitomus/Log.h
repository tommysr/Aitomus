#pragma once


#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"


namespace Aitomus {
	class AITOMUS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}


//CORE LOG MACROS
#define AIT_CORE_TRACE(...)    ::Aitomus::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define AIT_CORE_INFO(...)     ::Aitomus::Log::GetCoreLogger()->info(__VA_ARGS__)
#define AIT_CORE_WARN(...)     ::Aitomus::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define AIT_CORE_ERROR(...)    ::Aitomus::Log::GetCoreLogger()->error(__VA_ARGS__)
#define AIT_CORE_FATAL(...)    ::Aitomus::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//CLIENT LOG MACROS
#define AIT_TRACE(...)         ::Aitomus::Log::GetClientLogger()->trace(__VA_ARGS__)
#define AIT_INFO(...)          ::Aitomus::Log::GetClientLogger()->info(__VA_ARGS__)
#define AIT_WARN(...)          ::Aitomus::Log::GetClientLogger()->warn(__VA_ARGS__)
#define AIT_ERROR(...)         ::Aitomus::Log::GetClientLogger()->error(__VA_ARGS__)
#define AIT_FATAL(...)         ::Aitomus::Log::GetClientLogger()->fatal(__VA_ARGS__)