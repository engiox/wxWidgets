#include <wx/debug.h>
#include <wx/app.h>
#include <wx/frame.h>
#include <wx/hyperlink.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>

namespace HyperlinkCtrlExample {
  class Frame : public wxFrame {
  public:
    Frame() : wxFrame(nullptr, wxID_ANY, "HyperlinkCtrl example") {
      panel->SetSizer(boxSizerLinks);
      boxSizerLinks->Add(hyperlinkCtrl1, 0, wxSTRETCH_NOT, 0);
      boxSizerLinks->Add(staticText1, 0, wxSTRETCH_NOT, 0);
      boxSizerLinks->Add(hyperlinkCtrl2, 0, wxSTRETCH_NOT, 0);
      boxSizerLinks->Add(staticText2, 0, wxSTRETCH_NOT, 0);
    }
    
  private:
    wxPanel* panel = new wxPanel(this);
    wxBoxSizer* boxSizerLinks = new wxBoxSizer(wxHORIZONTAL);
    wxHyperlinkCtrl* hyperlinkCtrl1 = new wxHyperlinkCtrl(panel, wxID_ANY, "Gammasoft", "https://gammasoft71.wixsite.com/gammasoft");
    wxStaticText* staticText1 = new wxStaticText(panel, wxID_ANY, " presents ");
    wxHyperlinkCtrl* hyperlinkCtrl2 = new wxHyperlinkCtrl(panel, wxID_ANY, "wxWidgets", "https://gammasoft71.wixsite.com/gammasoft/wxwidgets");
    wxStaticText* staticText2 = new wxStaticText(panel, wxID_ANY, " examples");
  };

  class Application : public wxApp {
    bool OnInit() override {
      (new Frame())->Show();
      return true;
    }
  };
}

wxIMPLEMENT_APP(HyperlinkCtrlExample::Application);
