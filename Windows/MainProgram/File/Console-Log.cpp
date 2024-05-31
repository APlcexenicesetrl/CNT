#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <mutex>

//Console-Log
enum class LogLevel{
	INFO,
	WARNING,
	ERROR
}; 
class Logger {
	public:
	    Logger(const std::string& fileName);
	    ~Logger();
	    
	    void log(LogLevel level, const std::string& message);
	    
	private:
	    std::ofstream logFile;
	    std::mutex mtx;
	
	    std::string getCurrentTime();
	    std::string logLevelToString(LogLevel level);
	};
	
	Logger::Logger(const std::string& fileName) {
	    logFile.open(fileName, std::ios::app);
	    if (!logFile.is_open()) {
	        throw std::runtime_error("Unable to open log file.");
	    }
}

Logger::~Logger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}

void Logger::log(LogLevel level, const std::string& message) {
    std::lock_guard<std::mutex> lock(mtx);
    std::string timeStr = getCurrentTime();
    std::string levelStr = logLevelToString(level);
    std::string logMessage = "[" + timeStr + "][" + levelStr + "] " + message;

    // 输出到控制台
    std::cout << logMessage << std::endl;

    // 输出到文件
    if (logFile.is_open()) {
        logFile << logMessage << std::endl;
    }
}

std::string Logger::getCurrentTime() {
    std::time_t now = std::time(nullptr);
    char buf[100];
    if (std::strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", std::localtime(&now))) {
        return buf;
    }
    return "Unknown Time";
}

std::string Logger::logLevelToString(LogLevel level) {
    switch (level) {
        case LogLevel::INFO:
            return "INFO";
        case LogLevel::WARNING:
            return "WARNING";
        case LogLevel::ERROR:
            return "ERROR";
        default:
            return "UNKNOWN";
    }
}
