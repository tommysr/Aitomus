#pragma once


#ifdef AIT_PLATFORM_WINDOWS

extern Aitomus::Application* Aitomus::CreateApplication();

int main(int argc, char **argv) 
{
	Aitomus::Log::Init();
	AIT_CORE_WARN("Initialized log");
	int a = 5;
	AIT_INFO("Initialized log Var={0}", a);
	auto app = Aitomus::CreateApplication();
	app->Run();
	delete app;
}

#endif