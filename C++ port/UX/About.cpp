#include "About.h"

BEGIN_EVENT_TABLE(About,wxFrame)
	EVT_CLOSE(About::OnClose)
END_EVENT_TABLE()

About::About(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

About::~About()
{
}

void About::CreateGUIControls()
{
    wxImage::AddHandler(new wxPNGHandler);
	wxInitAllImageHandlers();   //Initialize graphic format handlers

	AboutFrameSizer = new wxBoxSizer(wxHORIZONTAL);
	this->SetSizer(AboutFrameSizer);
	this->SetAutoLayout(true);

	AboutPanel = new wxPanel(this, ID_AboutPanel, wxPoint(0, 0), wxSize(300, 300));
	AboutFrameSizer->Add(AboutPanel, 0, wxALIGN_CENTER | wxALL, 0);

	AboutSizer = new wxBoxSizer(wxVERTICAL);
	AboutPanel->SetSizer(AboutSizer);
	AboutPanel->SetAutoLayout(true);

	AboutSizer1 = new wxBoxSizer(wxHORIZONTAL);
	AboutSizer->Add(AboutSizer1, 0, wxALIGN_CENTER|wxALL, 5);

	wxImage image = wxBITMAP_PNG(icon).ConvertToImage();
	wxBitmap imageIcon = wxBitmap(image.Scale(75,75));
	Icon = new wxStaticBitmap(AboutPanel, ID_Icon, imageIcon, wxPoint(10, 23), wxSize(75, 75), wxALIGN_CENTER, _("StatBMP"));
	AboutSizer1->Add(Icon, 0, wxALIGN_CENTER | wxALL, 0);

    AboutInfo = new wxBoxSizer(wxHORIZONTAL);
    AboutSizer1->Add(AboutInfo, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND|wxTOP, 10);

    wxString LabelText = _("This program is brought to you by Hoe Hao Cheng and Koh Jun Dong.");
	Text = new wxStaticText(AboutPanel, ID_Text, LabelText, wxPoint(87, 25), wxSize(185, 89), 0,  _("Text"));
	AboutInfo->Add(Text, 1, wxALIGN_CENTER | wxEXPAND | wxLEFT, 10);

	SetTitle(_("About"));
	SetIcon(wxIcon("C:/Users/JunDong/Documents/GitHub/Text-Based-Game/Images/Icon.ico", wxBITMAP_TYPE_ICO));

	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
}

void About::OnClose(wxCloseEvent& event)
{
	Destroy();
}
