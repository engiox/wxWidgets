#include <wx/wx.h>

namespace TimerExample {
  class Frame : public wxFrame {
  public:
    Frame() : wxFrame(nullptr, wxID_ANY, "Timer example") {
      SetClientSize(230, 130);
      label->SetFont({48, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_NORMAL, false, "Arial"});
      label->SetForegroundColour({30, 144, 255});

      timer.Bind(wxEVT_TIMER, [&](wxTimerEvent& event) {
        label->SetLabelText(wxString::Format("%.1f", ++counter / 10.0));
      });

      button->Bind(wxEVT_BUTTON, [&](wxCommandEvent& event) {
        if (timer.IsRunning())
          timer.Stop();
        else
          timer.Start(100);
        button->SetLabel(timer.IsRunning() ? "Stop" : "Start");
      });
    }

  private:
    wxPanel* panel = new wxPanel(this);
    wxStaticText* label = new wxStaticText(panel, wxID_ANY, "0.0", {10, 10});
    wxButton* button = new wxButton(panel, wxID_ANY, "Start", {10, 90});
    wxTimer timer;
    int counter = 0;
  };

  class Application : public wxApp {
    bool OnInit() override {
      (new Frame())->Show();
      return true;
    }
  };
}

wxIMPLEMENT_APP(TimerExample::Application);
