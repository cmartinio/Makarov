#pragma once
#include "../Makarov.h"
#include <cstdio>

#ifdef MK_PLATFORM_WINDOWS

extern Makarov::Application* Makarov::CreateApplication();

int main(int argc, char* argv[])
{

	printf("Welcome Makarov Verson 1\n");
	auto app = Makarov::CreateApplication();
	app->Run();
	delete app;
}


#endif

