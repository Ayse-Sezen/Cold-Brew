#pragma once

// This file is only intended to be included in client Cold Brew applications

#include "ColdBrew/Application.h"
#include <stdio.h>

// Entry Point
#ifdef CB_PLATFORM_WINDOWS

extern ColdBrew::Application* ColdBrew::CreateApplication();

int main(int argc, char** argv) {
	printf("Starting Cold Brew Engine!");
	auto app = ColdBrew::CreateApplication();
	app->Run();
	delete app;
}

#endif
// End of Entry Point
