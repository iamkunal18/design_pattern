#include "hpDesktopBuilder.h"

void HpDesktopBuilder::buildMonitor() 
{
    desktop->setMonitor("HP Monitor");
}   

void HpDesktopBuilder::buildKeyboard() 
{
    desktop->setKeyboard("HP Keyboard");
}

void HpDesktopBuilder::buildMouse() 
{
    desktop->setMouse("HP Mouse");
}

void HpDesktopBuilder::buildSpeaker() 
{
    desktop->setSpeaker("HP Speakers");
}

void HpDesktopBuilder::buildRam() 
{
    desktop->setRam("HP RAM");
}

void HpDesktopBuilder::buildProcessor() 
{
    desktop->setProcessor("HP Gen");
}

void HpDesktopBuilder::buildMotherBoard() 
{
    desktop->setMotherBoard("HP Motherboard");
}
