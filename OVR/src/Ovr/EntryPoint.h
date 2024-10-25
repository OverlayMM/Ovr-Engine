#pragma once

#ifdef OV_PLATFORM_WINDOWS
extern Ovr::Application* Ovr::CreateApplication();

int main(int argc, char** argv) {
	printf("Ovr Engine Running");
	auto app = Ovr::CreateApplication();
	app->Run();
	delete app;
}

#endif // OV_PLATFORM_WINDOWS
