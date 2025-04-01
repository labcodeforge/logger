#include "Logger.h"
#include <iostream>

Logger Logger::instance;

void Logger::info(const std::string & message) {
    std::cout << "INFO: " << message << std::endl;
}
void Logger::error(const std::string & message) {
    std::cout << "INFO: " << message << std::endl;
}
void Logger::debug(const std::string & message) {
    std::cout << "Debug: " << message << std::endl;
}
void Logger::warning(const std::string & message) {
    std::cout << "Warning: " << message << std::endl;
}
void Logger::fatal(const std::string & message) {
    std::cout << "Fatal: " << message << std::endl;
}

Logger::Logger() {

}
Logger::~Logger() {

}