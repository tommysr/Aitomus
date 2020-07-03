#include <Aitomus.h>

class Sandbox : public Aitomus::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Aitomus::Application* Aitomus::CreateApplication()
{
	return new Sandbox();
}