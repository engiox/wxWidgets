#include <wx/wx.h>

class SkelApp : public wxApp
{
public:
    bool OnInit() override;
};

wxIMPLEMENT_APP(SkelApp);

bool SkelApp::OnInit()
{
    wxFrame* frame{ new wxFrame(nullptr, 1, "skeleton") };
    frame->Show(true);

    return true;
}
