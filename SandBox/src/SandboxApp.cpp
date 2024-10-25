#include "OVR.h"

class SandBox : public Ovr::Application
{
public :
	SandBox() {

	}
	~SandBox() {

	}
};

Ovr::Application* Ovr::CreateApplication() {
	return new SandBox();
}