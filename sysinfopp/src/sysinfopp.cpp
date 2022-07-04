#define sysinfoppLIBRARY_EXPORT

#include <sysinfopp/impl/connector.hpp>
#include <sysinfopp/sysinfopp.hpp>

namespace sysinfopp {
sysinfoppAPI const std::string getModel() { return impl::getModel(); }
sysinfoppAPI const std::string getOemName() { return impl::getOemName(); }
sysinfoppAPI const std::string getOsName() { return impl::getOsName(); }
sysinfoppAPI const std::string getOsVersion() {
	return impl::getOsVersion();
}
sysinfoppAPI const std::string getOsBuild() { return impl::getOsBuild(); }
sysinfoppAPI const std::string getLocale() { return impl::getLocale(); }
sysinfoppAPI const std::string getScreenResolution() {
	return impl::getScreenResolution();
}
sysinfoppAPI const std::string getCPUArchitecture() {
	return impl::getCPUArchitecture();
}
sysinfoppAPI const info_list getInfoList() { 
    info_list infoList;
    // add all the functions to the list
    infoList.push_back(std::make_pair("Model", getModel()));
    infoList.push_back(std::make_pair("OEM", getOemName()));
    infoList.push_back(std::make_pair("OS", getOsName()));
    infoList.push_back(std::make_pair("Version", getOsVersion()));
    infoList.push_back(std::make_pair("Build", getOsBuild()));
    infoList.push_back(std::make_pair("Locale", getLocale()));
    infoList.push_back(std::make_pair("Screen resolution", getScreenResolution()));
    infoList.push_back(std::make_pair("CPU architecture", getCPUArchitecture()));
    return infoList;
}
} // namespace sysinfopp