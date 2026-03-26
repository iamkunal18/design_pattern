#include "dellDesktopBuilder.h"

void DellDesktopBuilder::buildMonitor() 
{
    desktop->setMonitor("Dell Monitor");
}   

void DellDesktopBuilder::buildKeyboard() 
{
    desktop->setKeyboard("Dell Keyboard");
}

void DellDesktopBuilder::buildMouse() 
{
    desktop->setMouse("Dell Mouse");
}

void DellDesktopBuilder::buildSpeaker() 
{
    desktop->setSpeaker("Dell Speakers");
}

void DellDesktopBuilder::buildRam() 
{
    desktop->setRam("Dell RAM");
}

void DellDesktopBuilder::buildProcessor() 
{
    desktop->setProcessor("Dell Gen");
}

void DellDesktopBuilder::buildMotherBoard() 
{
    desktop->setMotherBoard("Dell Motherboard");
}
