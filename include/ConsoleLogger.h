#ifndef CONSOLE_LOGGER_H__
#define CONSOLE_LOGGER_H__
#include <string>
class ConsoleLogger {

public:
    void info(const std::string & message);
    void error(const std::string & message);
    void debug(const std::string & message);
    void warning(const std::string & message);
    void fatal(const std::string & message);

    static ConsoleLogger& getInstance() {
        return instance;
    }
private:
    ConsoleLogger();
    ~ConsoleLogger();
    ConsoleLogger(const ConsoleLogger&) = delete;
    ConsoleLogger& operator=(const ConsoleLogger&) = delete;
    ConsoleLogger(ConsoleLogger&&) = delete;
    ConsoleLogger& operator=(ConsoleLogger&&) = delete;
    static ConsoleLogger instance;

};

#endif