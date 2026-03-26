#include "desktop.h"
#include <iostream>

void Desktop::setMonitor(const string& pMonitor) 
{
    this->monitor = pMonitor;
}

void Desktop::setKeyboard(const string& pKeyboard) 
{
    this->keyboard = pKeyboard;
}

void Desktop::setMouse(const string& pMouse) 
{
    this->mouse = pMouse;
}

void Desktop::setSpeaker(const string& pSpeaker) 
{
    this->speaker = pSpeaker;
}

void Desktop::setRam(const string& pRam) 
{
    this->ram = pRam;
}

void Desktop::setProcessor(const string& pProcessor) 
{
    this->processor = pProcessor;
}

void Desktop::setMotherBoard(const string& pMotherBoard) 
{
    this->motherBoard = pMotherBoard;
}

void Desktop::showSpecs()
{
    cout << "----------------------------------------------------" << endl;
    cout << "Desktop Specifications" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Monitor: " << monitor << endl;
    cout << "Keyboard: " << keyboard << endl;
    cout << "Mouse: " << mouse << endl;
    cout << "Speaker: " << speaker << endl;
    cout << "RAM: " << ram << endl;
    cout << "Processor: " << processor << endl;
    cout << "Motherboard: " << motherBoard << endl;
    cout << "----------------------------------------------------" << endl;
}