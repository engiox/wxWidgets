#include "myFrame.h"

MyFrame::MyFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(640, 480))
{
//    SetIcon(wxIcon("D:/dev/wxWidgets/art/wxwin.ico", wxBITMAP_TYPE_ICO, -1, -1));
    SetIcon(wxIcon(wxT("D:/dev/wxWidgets/art/wxwin32x32.xpm")));

    wxPanel *panel = new wxPanel(this, wxID_ANY, wxPoint(20, 20), wxSize(200,100));
    wxButton *button = new wxButton(panel, wxID_EXIT, wxT("Quit"), wxPoint(20, 20));
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED,
            wxCommandEventHandler(MyFrame::OnQuit));
    button->SetFocus();

    Centre();
}

void MyFrame::OnQuit(wxCommandEvent &WXUNUSED(event))
{
    Close(true);
}
