#pragma once

// This file is only intended to be included in client Cold Brew applications

#include "ColdBrew/Application.h"
#include "ColdBrew/Log.h"
#include <stdio.h>

// Entry Point
#ifdef CB_PLATFORM_WINDOWS

extern ColdBrew::Application* ColdBrew::CreateApplication();

int main(int argc, char** argv) {
	// Initializing the logger
	ColdBrew::Log::Init();

	// displaying startup logging messages from core (engine) and client (game app)
	CB_CORE_WARN("Initialized Log!");
	CB_INFO("Hello!");


	auto app = ColdBrew::CreateApplication();
	app->Run();
	delete app;
}

#endif
// End of Entry Point
