#pragma once
#include <string_view>
#include <sysinfopp/private/exportAPI.hpp>
#include <utility>
#include <vector>

namespace sysinfopp {
// a list of const value and pair to the corresponding function
using info_list =
    std::vector<std::pair<std::string, std::string>>;

sysinfoppAPI const std::string getModel();
sysinfoppAPI const std::string getOemName();
sysinfoppAPI const std::string getOsName();
sysinfoppAPI const std::string getOsVersion();
sysinfoppAPI const std::string getOsBuild();
sysinfoppAPI const std::string getLocale();
sysinfoppAPI const std::string getScreenResolution();
sysinfoppAPI const std::string getCPUArchitecture();
sysinfoppAPI const info_list getInfoList();
} // namespace sysinfopp