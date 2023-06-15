#include "myFrame.h"
#include "main.h"

bool MyApp::OnInit()
{
    MyFrame *mframe = new MyFrame(wxT("Simple"));
    mframe->Show(true);

    return true;
}
