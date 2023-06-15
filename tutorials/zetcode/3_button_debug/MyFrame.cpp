#include "MyFrame.h"

MyFrame::MyFrame(const wxString &title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(640, 480))
{
    wxPanel *panel = new wxPanel(this, wxID_ANY);

    wxButton *button = new wxButton(panel, wxID_EXIT, wxT("Quit"), wxPoint(20,20));

    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::OnQuit));

    button->SetFocus();
    Centre();
}

void MyFrame::OnQuit(wxCommandEvent &WXUNUSED(event))
{
    Close(true);
}
