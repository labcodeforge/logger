#ifndef LOGGER_H__
#define LOGGER_H__
#include <string>
class Logger {

public:
    void info(const std::string & message);
    void error(const std::string & message);
    void debug(const std::string & message);
    void warning(const std::string & message);
    void fatal(const std::string & message);

    static Logger& getInstance() {
        return instance;
    }
private:
    Logger();
    ~Logger();
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;
    Logger(Logger&&) = delete;
    Logger& operator=(Logger&&) = delete;
    static Logger instance;

};

#endif