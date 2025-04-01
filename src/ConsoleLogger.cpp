#include "ConsoleLogger.h"
#include <iostream>

ConsoleLogger ConsoleLogger::instance;

void ConsoleLogger::info(const std::string & message) {
    std::cout << "INFO: " << message << std::endl;
}
void ConsoleLogger::error(const std::string & message) {
    std::cout << "INFO: " << message << std::endl;
}
void ConsoleLogger::debug(const std::string & message) {
    std::cout << "Debug: " << message << std::endl;
}
void ConsoleLogger::warning(const std::string & message) {
    std::cout << "Warning: " << message << std::endl;
}
void ConsoleLogger::fatal(const std::string & message) {
    std::cout << "Fatal: " << message << std::endl;
}

ConsoleLogger::ConsoleLogger() {

}
ConsoleLogger::~ConsoleLogger() {

}