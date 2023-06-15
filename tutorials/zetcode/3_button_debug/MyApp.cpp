#include "MyApp.h"
#include "MyFrame.h"

bool MyApp::OnInit()
{
    MyFrame *mframe = new MyFrame(wxT("Panel with Button"));
    mframe->Show(true);

    return true;
}
