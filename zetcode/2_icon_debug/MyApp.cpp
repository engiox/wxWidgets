#include "MyApp.h"
#include "MyFrame.h"

bool MyApp::OnInit()
{
    MyFrame *my_frame = new MyFrame(wxT("Frame with Icon"));
    my_frame->Show();

    return true;
};
