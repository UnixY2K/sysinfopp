#include <iomanip>
#include <ios>
#include <iostream>
#include <sysinfopp/sysinfopp.hpp>
#include <vector>

int main() {

	auto infoList = sysinfopp::getInfoList();
	// get the most large name and value
	size_t nameLenght = 0;
	size_t valueLenght = 0;
	for (auto &info : infoList) {
		if (info.first.size() > nameLenght) {
			nameLenght = info.first.size();
		}
		if (info.second.size() > valueLenght) {
			valueLenght = info.second.size();
		}
	}
	// print the header

	std::cout << std::setfill('-') << std::setw(nameLenght + valueLenght + 7)
	          << "" << std::endl;
	std::cout << std::setfill(' ');
	std::cout << "| " << std::setw(nameLenght) << std::left << "Name"
	          << " | " << std::setw(valueLenght) << std::left << "Value"
	          << " |" << std::endl;

	std::cout << std::setfill('-') << std::setw(nameLenght + valueLenght + 7)
	          << "" << std::endl;
	std::cout << std::setfill(' ');

	// print the info list
	for (auto &info : infoList) {
		std::cout << "| " << std::setw(nameLenght) << std::left << info.first
		          << " | " << std::setw(valueLenght) << std::left << info.second
		          << " |" << std::endl;
	}

	std::cout << std::setfill('-') << std::setw(nameLenght + valueLenght + 7)
	          << "" << std::endl;
}