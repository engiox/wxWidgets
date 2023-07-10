#include <wx/app.h>
#include <wx/choice.h>
#include <wx/frame.h>
#include <wx/panel.h>

namespace ChoiceExample {
  class Frame : public wxFrame {
  public:
    Frame() : wxFrame(nullptr, wxID_ANY, "Choice example") {
      choice1->Append({"item 1", "item 2", "item 3", "item 4", "item 5", "item 6", "item 7", "item 8", "item 9", "item 10"});
      choice1->SetSelection(0);
      choice1->Bind(wxEVT_CHOICE, &Frame::OnChoicClick, this);

      choice2->Append({"item 1", "item 2", "item 3", "item 4", "item 5", "item 6", "item 7", "item 8", "item 9", "item 10"});
      choice2->SetSelection(0);
      choice2->Bind(wxEVT_CHOICE, &Frame::OnChoicClick, this);
    }
    
  private:
    void OnChoicClick(wxCommandEvent& e) {
      choice1->SetSelection(static_cast<wxChoice*>(e.GetEventObject())->GetSelection());
      choice2->SetSelection(static_cast<wxChoice*>(e.GetEventObject())->GetSelection());
    }
    wxPanel* panel = new wxPanel(this);
    wxChoice* choice1 = new wxChoice(panel, wxID_ANY, {10, 10});
    wxChoice* choice2 = new wxChoice(panel, wxID_ANY, {10, 50});
  };

  class Application : public wxApp {
    bool OnInit() override {
      (new Frame())->Show();
      return true;
    }
  };
}

wxIMPLEMENT_APP(ChoiceExample::Application);
