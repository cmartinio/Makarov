#include <Makarov.h>
// previous modification of this sandbox caused compilation errors. I am working on a fix
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
