#pragma once

#include "Core.h"

namespace Ovr
{
	class OVR_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}
