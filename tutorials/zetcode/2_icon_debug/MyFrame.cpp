#include "MyFrame.h"

MyFrame::MyFrame(const wxString &title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(600,400))
{
    SetIcon(wxIcon(wxT("D:/Dev/wxWidgets/art/wxwin32x32.xpm")));
    Centre();
}
