#include "desktopDirector.h"
#include "dellDesktopBuilder.h"
#include "hpDesktopBuilder.h"

int main()
{
    HpDesktopBuilder* hpDesktopBuilder = new HpDesktopBuilder();
    DellDesktopBuilder* dellDesktopBuilder = new DellDesktopBuilder();

    DesktopDirector* desktopDirector1 = new DesktopDirector(hpDesktopBuilder);
    DesktopDirector* desktopDirector2 = new DesktopDirector(dellDesktopBuilder);

    Desktop* hpDesktop = desktopDirector1->BuildDesktop();
    Desktop* dellDesktop = desktopDirector2->BuildDesktop();

    hpDesktop->showSpecs();
    dellDesktop->showSpecs();
    
// Clean up
    delete hpDesktop;
    delete dellDesktop;
    delete desktopDirector1;
    delete desktopDirector2;
    delete hpDesktopBuilder;
    delete dellDesktopBuilder;

    return 0;
}
