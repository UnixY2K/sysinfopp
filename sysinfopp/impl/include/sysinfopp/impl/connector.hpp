#pragma once
#include <string>

namespace sysinfopp::impl {
const std::string getModel();
const std::string getOemName();
const std::string getOsName();
const std::string getOsVersion();
const std::string getOsBuild();
const std::string getLocale();
const std::string getScreenResolution();
const std::string getCPUArchitecture();
} // namespace sysinfopp::impl
