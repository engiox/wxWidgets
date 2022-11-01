#include <wx/wx.h>
#include <wx/panel.h>

class LeftPanel : public wxPanel
{
    public:
        LeftPanel(wxPanel *paret);

        void onPlus(wxCommandEvent &event);
        void onMinus(wxCommandEvent &event);

        wxButton *m_plus;
        wxButton *m_minus;
        wxPanel *m_parent;
        int count;
};
