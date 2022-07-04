#pragma once
#include <string_view>

// macros definitions for constants

namespace sysinfopp::macros {
constexpr std::string_view SYSINFOPP_GENERIC_PLATFORM = "Unknown/Generic";
constexpr std::string_view SYSINFOPP_UWP_PLATFORM = "UWP";
constexpr std::string_view SYSINFOPP_WINDOWS_PLATFORM = "Windows";
constexpr std::string_view SYSINFOPP_LINUX_PLATFORM = "Linux";
constexpr std::string_view SYSINFOPP_MACOS_PLATFORM = "MacOSX";
// NOTE: BSD is not planned to be supported
constexpr std::string_view SYSINFOPP_BSD_PLATFORM = "BSD";
} // namespace sysinfo::macros

// check if is uwp, windows, linux, macosx
#if defined(WINAPI_FAMILY) && (WINAPI_FAMILY == WINAPI_FAMILY_APP)
// Windows Store or Universal Windows Platform
#define SYSINFOPP_MACRO_PLATFORM sysinfopp::macros::SYSINFOPP_UWP_PLATFORM
#elif defined(_WIN32)
// Windows Desktop
#define SYSINFOPP_MACRO_PLATFORM                                               \
	sysinfopp::macros::SYSINFOPP_WINDOWS_PLATFORM
#elif defined(__linux__)
// linux
#define SYSINFOPP_MACRO_PLATFORM                                               \
	sysinfopp::macros::SYSINFOPP_LINUX_PLATFORM
#elif defined(__APPLE__) && defined(__MACH__)
// Mac OSX
#define SYSINFOPP_MACRO_PLATFORM                                               \
	sysinfopp::macros::SYSINFOPP_MACOS_PLATFORM
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) ||   \
    defined(__bsdi__) || defined(__DragonFly__)
// bsd
#define SYSINFOPP_MACRO_PLATFORM sysinfopp::macros::SYSINFOPP_BSD_PLATFORM
#else
// unknown
#define SYSINFOPP_MACRO_PLATFORM                                               \
	sysinfopp::macros::SYSINFOPP_GENERIC_PLATFORM
#endif

namespace sysinfopp::macros {
constexpr std::string_view SYSINFOPP_PLATFORM = SYSINFOPP_MACRO_PLATFORM;
}