#undef NDEBUG
#include <map>
#include <string>
#include <wx/wx.h>
#include <wx/display.h>
#include <wx/log.h>

namespace MouseEventsExample {
  class Frame : public wxFrame {
  public:
    Frame() : wxFrame(nullptr, wxID_ANY, "MouseEvents") {
      panel->Bind(wxEVT_COMMAND_LEFT_CLICK, [&](wxCommandEvent& event) {
        wxLogDebug("Command Left Click");
      });
      
      panel->Bind(wxEVT_COMMAND_RIGHT_CLICK, [&](wxCommandEvent& event) {
        wxLogDebug("Command Right Click");
      });
      
      panel->Bind(wxEVT_COMMAND_LEFT_DCLICK, [&](wxCommandEvent& event) {
        wxLogDebug("Command Left DClick");
      });
      
      panel->Bind(wxEVT_COMMAND_RIGHT_DCLICK, [&](wxCommandEvent& event) {
        wxLogDebug("Command Right DClick");
      });
      
      panel->Bind(wxEVT_AUX1_DCLICK, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("Aux1DbClick", event).c_str());
      });
      
      panel->Bind(wxEVT_AUX1_DOWN, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("Aux1Down", event).c_str());
      });

      panel->Bind(wxEVT_AUX1_UP, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("Aux1Up", event).c_str());
      });

      panel->Bind(wxEVT_AUX2_DCLICK, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("Aux2DbClick", event).c_str());
      });

      panel->Bind(wxEVT_AUX2_DOWN, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("Aux2Down", event).c_str());
      });

      panel->Bind(wxEVT_AUX2_UP, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("Aux2Up", event).c_str());
      });

      panel->Bind(wxEVT_LEFT_DCLICK, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("LeftDbClick", event).c_str());
      });

      panel->Bind(wxEVT_LEFT_DOWN, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("LeftDown", event).c_str());
      });

      panel->Bind(wxEVT_LEFT_UP, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("LeftUp", event).c_str());
      });

      panel->Bind(wxEVT_MIDDLE_DCLICK, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("MiddleDbClick", event).c_str());
      });

      panel->Bind(wxEVT_MIDDLE_DOWN, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("MiddleDown", event).c_str());
      });

      panel->Bind(wxEVT_MIDDLE_UP, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("MiddleUp", event).c_str());
      });

      panel->Bind(wxEVT_RIGHT_DCLICK, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("RightDbClick", event).c_str());
      });

      panel->Bind(wxEVT_RIGHT_DOWN, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("RightDown=", event).c_str());
      });

      panel->Bind(wxEVT_RIGHT_UP, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("RightUp", event).c_str());
      });

      panel->Bind(wxEVT_MOTION, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("Motion", event).c_str());
      });

      panel->Bind(wxEVT_MOUSEWHEEL, [&](wxMouseEvent& event) {
        wxLogDebug(MouseEventToString("MouseWheel", event).c_str());
      });

      panel->Bind(wxEVT_ENTER_WINDOW, [&](wxMouseEvent& event) {
        wxLogDebug("Enter Window");
      });

      panel->Bind(wxEVT_LEAVE_WINDOW, [&](wxMouseEvent& event) {
        wxLogDebug("Leave Window");
      });
    }
    
  private:
    static std::string MouseEventToString(const std::string eventName, wxMouseEvent& event) {
      return wxString::Format("%s={Button=%s, ClickCount=%d, WheelDelta=%d, wheelAxis=%s, location[x=%d, y=%d], ModifiersKey=[%s]}", eventName, ButtonToString(event.GetButton()), event.GetClickCount(), event.GetWheelDelta(), WheelAxisToString(event.GetWheelAxis()), event.GetPosition().x, event.GetPosition().y, ModiiersToString(event.GetModifiers())).ToStdString();
    }

    static std::string ButtonToString(int button) {
      static std::map<int, std::string> buttons {{wxMOUSE_BTN_NONE, "wxMOUSE_BTN_NONE"}, {wxMOUSE_BTN_LEFT, "wxMOUSE_BTN_LEFT"}, {wxMOUSE_BTN_MIDDLE, "wxMOUSE_BTN_MIDDLE"}, {wxMOUSE_BTN_RIGHT, "wxMOUSE_BTN_RIGHT"}, {wxMOUSE_BTN_AUX1, "wxMOUSE_BTN_AUX1"}, {wxMOUSE_BTN_AUX2, "wxMOUSE_BTN_AUX2"}};
      return buttons[button];
    }
    
    static std::string WheelAxisToString(int wheelAxis) {
      return wheelAxis == wxMOUSE_WHEEL_HORIZONTAL ? "wxMOUSE_WHEEL_HORIZONTAL" :  "wxMOUSE_WHEEL_VERTICAL";
    }
    
    static std::string ModiiersToString(int modifiers) {
      if (!modifiers) return "None";
      std::string result;
      if ((modifiers & wxMOD_SHIFT) == wxMOD_SHIFT) result += "Shift, ";
      if ((modifiers & wxMOD_RAW_CONTROL) == wxMOD_RAW_CONTROL) result += "Control, ";
      if ((modifiers & wxMOD_ALT) == wxMOD_ALT) result += "Alt, ";
      if ((modifiers & wxMOD_CONTROL) == wxMOD_CONTROL) result += "Command, ";
      if ((modifiers & wxMOD_META) == wxMOD_META) result += "Meta, ";
      if (result.size() > 1) result.resize(result.size() - 2);
      return result;
    }
    
    wxPanel* panel = new wxPanel(this);
  };

  class Application : public wxApp {
    bool OnInit() override {
      wxLogWindow* logWindow = new wxLogWindow(nullptr, "Debug");
      logWindow->GetFrame()->SetSize(wxDisplay(wxDisplay::GetFromWindow(logWindow->GetFrame())).GetClientArea().GetLeft(), wxDisplay(wxDisplay::GetFromWindow(logWindow->GetFrame())).GetClientArea().GetTop() + wxDisplay(wxDisplay::GetFromWindow(logWindow->GetFrame())).GetClientArea().GetHeight() - wxDisplay(wxDisplay::GetFromWindow(logWindow->GetFrame())).GetClientArea().GetHeight() / 4, wxDisplay(wxDisplay::GetFromWindow(logWindow->GetFrame())).GetClientArea().GetWidth(), wxDisplay(wxDisplay::GetFromWindow(logWindow->GetFrame())).GetClientArea().GetHeight() / 4);
      (new Frame())->Show();
      return true;
    }
  };
}

wxIMPLEMENT_APP(MouseEventsExample::Application);
