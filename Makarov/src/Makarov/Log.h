#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"


namespace Makarov {

	class MAKAROV_API Log
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


// Core log macros
#define MK_CORE_TRACE(...)   ::Makarov::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MK_CORE_INFO(...)    ::Makarov::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MK_CORE_WARN(...)    ::Makarov::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MK_CORE_FATAL(...)   ::Makarov::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define MK_TRACE(...)   ::Makarov::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MK_INFO(...)    ::Makarov::Log::GetClientLogger()->info(__VA_ARGS__)
#define MK_WARN(...)    ::Makarov::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MK_FATAL(...)   ::Makarov::Log::GetClientLogger()->fatal(__VA_ARGS__)