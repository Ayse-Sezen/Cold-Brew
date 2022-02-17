#pragma once

#include "Core.h"

namespace ColdBrew {

	class COLDBREW_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}

