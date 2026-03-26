#ifndef DESKTOPDIRECTOR_H
#define DESKTOPDIRECTOR_H

#include "desktopBuilder.h"

class DesktopDirector 
{
private:
    DesktopBuilder* desktopBuilder;
public:
    DesktopDirector(DesktopBuilder* builder) : desktopBuilder(builder) {}
    Desktop* getDesktop() 
    {
        return desktopBuilder->getDesktop();
    }
    Desktop* BuildDesktop() 
    {
        desktopBuilder->buildMonitor();
        desktopBuilder->buildKeyboard();
        desktopBuilder->buildMouse();
        desktopBuilder->buildSpeaker();
        desktopBuilder->buildRam();
        desktopBuilder->buildProcessor();
        desktopBuilder->buildMotherBoard();
        
        return desktopBuilder->getDesktop();
    }
};

#endif // DESKTOPDIRECTOR_H
