#include <thread>
#include <wx/wx.h>
#include <wx/progdlg.h>

using namespace std;
using namespace std::literals;

namespace GenericProgressDialogExample {
  class Frame : public wxFrame {
  public:
    Frame() : wxFrame(nullptr, wxID_ANY, "GenericProgressDialog example") {
      buttonProcess->Bind(wxEVT_BUTTON, [&](wxCommandEvent& event) {
        wxGenericProgressDialog progressDialog("Process running", "Please wait...", 100, this, wxPD_APP_MODAL|wxPD_AUTO_HIDE|wxPD_CAN_SKIP|wxPD_REMAINING_TIME);
        progressDialog.Hide();
        Enable(false);
        progressDialog.Show();
        for (auto step = 1; step <= progressDialog.GetRange(); ++step) {
          progressDialog.Update(step, wxString::Format("Step %d/%d ==> %s", progressDialog.GetValue(), progressDialog.GetRange(), progressDialog.WasSkipped() ? "skipped" : "done"));
          this_thread::sleep_for(100ms);
        }
        Enable(true);
      });

      buttonIndeterminateProcess->Bind(wxEVT_BUTTON, [&](wxCommandEvent& event) {
        wxProgressDialog progressDialog("Indeterminate process running", "Click \"Cancel\" to abort", 10, this, wxPD_APP_MODAL|wxPD_CAN_ABORT|wxPD_ELAPSED_TIME);
        progressDialog.Hide();
        Enable(false);
        progressDialog.Show();
        while(!progressDialog.WasCancelled()) {
          progressDialog.Pulse();
          this_thread::sleep_for(100ms);
        }
        Enable(true);
      });
    }

  private:
    wxPanel* panel = new wxPanel(this);
    wxButton* buttonProcess = new wxButton(panel, wxID_ANY, "Process", {10, 10});
    wxButton* buttonIndeterminateProcess = new wxButton(panel, wxID_ANY, "Indeterminate Process", {100, 10});
  };

  class Application : public wxApp {
    bool OnInit() override {
      (new Frame())->Show();
      return true;
    }
  };
}

wxIMPLEMENT_APP(GenericProgressDialogExample::Application);
