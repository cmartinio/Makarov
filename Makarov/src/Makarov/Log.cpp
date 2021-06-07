#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Makarov {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("Makarov");
		s_CoreLogger->set_level(spdlog::level::trace);


		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}

}
/*
I have not touched the game engine in a very long time,
but now i have some free time to give it my full attention.

*/