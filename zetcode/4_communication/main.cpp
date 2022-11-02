#include "main.h"
#include "Communicate.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    Communicate *communicate = new Communicate(wxT("Widgets communicate"));
    communicate->Show(true);

    return true;
}
