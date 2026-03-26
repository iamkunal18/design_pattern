#include "logger.hpp"

int Logger::counter = 0;
Logger *Logger::loggerInstance = nullptr;
mutex Logger::mtx; // Initialize the mutex

Logger::Logger() 
{
    counter++;
    cout << "Logger initialized. \nNumber of instances: " << counter << endl;
}

Logger* Logger::getInstance()
{
    if (loggerInstance == nullptr)
    {
        mtx.lock(); // Lock the mutex to ensure thread safety
        if (loggerInstance == nullptr) 
        {
            loggerInstance = new Logger();
        }
        mtx.unlock(); // Unlock the mutex after creating the instance
    }
    return loggerInstance;
}

void Logger::log(const string& message) 
{
    cout << "Log: " << message << endl;
}
