#pragma once


#ifdef AIT_PLATFORM_WINDOWS

extern Aitomus::Application* Aitomus::CreateApplication();

int main(int argc, char **argv) {
	
	auto app = Aitomus::CreateApplication();
	app->Run();
	delete app;
}

#endif