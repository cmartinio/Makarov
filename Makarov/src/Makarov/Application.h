#pragma once

#include "Core.h"

namespace Makarov {

	class MAKAROV_API Application 
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();


}
