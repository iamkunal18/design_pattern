#include <iostream>
#include <thread>
#include "logger.hpp"

using namespace std;

void user1logs()
{
    Logger* logger1 = Logger::getInstance(); // Create a Logger instance
    logger1 -> log("This is a log message- logger1."); // Log a message

}

void user2logs()
{
    Logger* logger2 = Logger::getInstance(); // Create a Logger instance
    logger2 -> log("This is a log message- logger2."); // Log a message
}

int main() 
{
    thread t1(user1logs); // Create a thread for user1
    thread t2(user2logs); // Create a thread for user2

    t1.join(); // Wait for user1 thread to finish
    t2.join(); // Wait for user2 thread to finish
    return 0;
}
