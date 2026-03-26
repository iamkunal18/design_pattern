#ifndef DESKTOP_H
#define DESKTOP_H

#include <string>
using namespace std;

class Desktop 
{
private:
    string monitor;
    string keyboard;
    string mouse;
    string speaker;
    string ram;
    string processor;
    string motherBoard;

public:
    void setMonitor(const string& monitor);
    void setKeyboard(const string& keyboard);
    void setMouse(const string& mouse);
    void setSpeaker(const string& speaker);
    void setRam(const string& ram);
    void setProcessor(const string& processor);
    void setMotherBoard(const string& motherBoard);
    void showSpecs();
};

#endif // DESKTOP_H
