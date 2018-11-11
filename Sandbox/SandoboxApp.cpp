#include <Makarov.h>

class Sandbox : public Makarov::Application{
	
public:
	Sandbox(){
	
}
	~Sandbox(){
		
	}
};

Makarov::Application* Makarov::CreateApplication()
{
	return new Sandbox();
}
