#include <sysinfopp/constants.hpp>
#include <sysinfopp/impl/connector.hpp>

namespace sysinfopp::impl {
const std::string getModel() { return std::string{constants::unknown_value}; }
const std::string getOemName() { return std::string{constants::unknown_value}; }
const std::string getOsName() { return std::string{constants::unknown_value}; }
const std::string getOsVersion() {
	return std::string{constants::unknown_value};
}
const std::string getOsBuild() { return std::string{constants::unknown_value}; }
const std::string getLocale() { return std::string{constants::unknown_value}; }
const std::string getScreenResolution() {
	return std::string{constants::unknown_value};
}
const std::string getCPUArchitecture() {
	return std::string{constants::unknown_value};
}
} // namespace sysinfopp::impl