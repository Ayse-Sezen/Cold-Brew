#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace ColdBrew {

	class COLDBREW_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger;  }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Defining core logging macros for use in entry point
#define CB_CORE_TRACE(...) ::ColdBrew::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define CB_CORE_INFO(...)  ::ColdBrew::Log::GetCoreLogger()->info(__VA_ARGS__);
#define CB_CORE_WARN(...)  ::ColdBrew::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define CB_CORE_ERROR(...) ::ColdBrew::Log::GetCoreLogger()->error(__VA_ARGS__);
#define CB_CORE_FATAL(...) ::ColdBrew::Log::GetCoreLogger()->fatal(__VA_ARGS__);

// Defining client logging macros for use in entry point
#define CB_TRACE(...) ::ColdBrew::Log::GetClientLogger()->trace(__VA_ARGS__);
#define CB_INFO(...)  ::ColdBrew::Log::GetClientLogger()->info(__VA_ARGS__);
#define CB_WARN(...)  ::ColdBrew::Log::GetClientLogger()->warn(__VA_ARGS__);
#define CB_ERROR(...) ::ColdBrew::Log::GetClientLogger()->error(__VA_ARGS__);
#define CB_FATAL(...) ::ColdBrew::Log::GetClientLogger()->fatal(__VA_ARGS__);

