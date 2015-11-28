#ifndef ABOUT_H_INCLUDED
#define ABOUT_H_INCLUDED

#ifndef WX_PRECOMP
#include <wx/wx.h>
#include <wx/frame.h>
#else
#include <wx/wxprec.h>
#endif

#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/statbmp.h>
#include <wx/imagpng.h>
#include <wx/bitmap.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/image.h>

#undef About_STYLE
#define About_STYLE wxCAPTION | wxSYSTEM_MENU | wxSTAY_ON_TOP | wxCLOSE_BOX | wxFRAME_FLOAT_ON_PARENT

class About : public wxFrame
{
private:
    DECLARE_EVENT_TABLE();

    wxStaticText *Credit;
    wxStaticText *Detail;
    wxStaticText *Attrib;
    wxStaticBitmap *Icon;
    wxBoxSizer *AboutSizer;
    wxPanel *AboutPanel;
    wxBoxSizer *AboutFrameSizer;
    wxBoxSizer *AboutInfo;

    enum
    {
        ID_Text = 10,
        ID_Icon = 11,
        ID_AboutPanel = 12
    };

    void OnClose(wxCloseEvent& event);
    void CreateGUIControls();

public:
    About(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("About"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = About_STYLE);
    virtual ~About();

};
#endif // ABOUT_H_INCLUDED
