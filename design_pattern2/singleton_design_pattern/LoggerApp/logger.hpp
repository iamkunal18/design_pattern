#ifndef logger_hpp
#define logger_hpp

#include <iostream>
#include <string>
#include <mutex>
using namespace std;

class Logger 
{
    private:
        static int counter;
        static Logger* loggerInstance;
        static mutex mtx; // Mutex for thread safety
        Logger(); // Private constructor to prevent instantiation
        
    public:
        Logger(const Logger&) = delete; // Prevent copy construction
        Logger& operator=(const Logger&) = delete; // Prevent assignment
        static Logger* getInstance();
        void log(const string& message);
};

#endif // logger_hpp
