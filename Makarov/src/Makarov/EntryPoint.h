#pragma once


#include "../Makarov.h"
#include <cstdio>
#include "Log.h"

#ifdef MK_PLATFORM_WINDOWS

extern Makarov::Application* Makarov::CreateApplication();

int main(int argc, char* argv[])
{
	Makarov::Log::Init();
	MK_CORE_WARN("Initialized Log!");
	int a = 5;
	MK_INFO("The Makarov is in Motion! Var={0}", a );

	
	auto app = Makarov::CreateApplication();
	app->Run();
	delete app;
}


#endif

