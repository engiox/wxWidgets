#include "myFrame.h"

MyFrame::MyFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(640, 480))
{
    Centre();
}
