#pragma once
#include "Core.h"
#include "Events/Event.h"

namespace Aitomus {

	class AITOMUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	Application* CreateApplication();

}
