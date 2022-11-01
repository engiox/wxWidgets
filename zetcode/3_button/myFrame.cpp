#include "myFrame.h"

MyFrame::MyFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(640, 480))
{
    SetIcon(wxIcon("D:/dev/wxWidgets/art/wxwin.ico", wxBITMAP_TYPE_ICO, -1, -1));
//    SetIcon(wxIcon(wxT("D:/dev/wxWidgets/art/wxwin32x32.xpm")));
    Centre();
}
