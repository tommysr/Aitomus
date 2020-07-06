#include "Application.h"

#include "Aitomus/Events/ApplicationEvent.h"
#include "Aitomus/Log.h"

namespace Aitomus {

	Application::Application()
	{

	}
	Application::~Application()
	{

	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			AIT_TRACE(e);
		}
		if(e.IsInCategory(EventCategoryInput))
		{
			AIT_TRACE(e);
		}

		
		while (true);
	}

}
