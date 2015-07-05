#include "About.h"

#include "wx/gdicmn.h"

#include "../version.h"

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

	AboutPanel = new wxPanel(this, ID_AboutPanel, wxPoint(0, 0), wxSize(300, 450));
	AboutFrameSizer->Add(AboutPanel, 0, wxALIGN_CENTER | wxALL, 0);

	AboutSizer = new wxBoxSizer(wxVERTICAL);
	AboutPanel->SetSizer(AboutSizer);
	AboutPanel->SetAutoLayout(true);

	AboutInfo = new wxBoxSizer(wxHORIZONTAL);
	AboutSizer->Add(AboutInfo, 0, wxALIGN_CENTER|wxALL, 5);

	wxImage image = wxBITMAP_PNG(icon).ConvertToImage();
	wxBitmap imageIcon = wxBitmap(image.Scale(110,110));
	Icon = new wxStaticBitmap(AboutPanel, ID_Icon, imageIcon, wxPoint(10, 23), wxSize(110, 110), wxALIGN_CENTER, _("StatBMP"));
	AboutInfo->Add(Icon, 0, wxALIGN_CENTER | wxALL, 0);

    wxString LabelCredit = _("Credits:\nKoh Jun Dong - UI and Optimization\nHoe Hao Cheng - Backstage and Game Logic");
	Credit = new wxStaticText(AboutPanel, ID_Text, LabelCredit, wxPoint(87, 25), wxSize(20, 45), 0,  _("Credit"));
	AboutSizer->Add(Credit, 0, wxALIGN_CENTER | wxEXPAND | wxALL, 10);

    std::string status(AutoVersion::STATUS_SHORT);
    std::string version(AutoVersion::FULLVERSION_STRING);
	std::string LabelDetail = ("This program is licensed under the GNU GPL v3 standard.\n\nVersion: \n" + status + version + "\n\nWebsite: http://github.com/hch12907/Text-Based-Game");
	wxString dstring(LabelDetail);
	Detail = new wxStaticText(AboutPanel, ID_Text, LabelDetail, wxPoint(0, 25), wxSize(20, 120), 0,  _("Detail"));
	AboutSizer->Add(Detail, 0, wxALIGN_CENTER | wxEXPAND | wxALL, 10);

	std::string LabelAttrib = ("Library : \nwxWidgets (www.wxwidgets.org)\n\nSoftware : \nGIMP (www.gimp.org)\nMinGW (www.mingw.org)\nCode:Blocks (www.codeblocks.org)");
	wxString lstring(LabelAttrib);
	Attrib = new wxStaticText(AboutPanel, ID_Text, LabelAttrib, wxPoint(0, 25), wxSize(20, 140), 0,  _("Attrib"));
	AboutSizer->Add(Attrib, 0, wxALIGN_CENTER | wxEXPAND | wxALL, 10);

	SetTitle(_("About"));
	SetIcon(wxIcon("../Images/Icon.ico", wxBITMAP_TYPE_ICO));

	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
}

void About::OnClose(wxCloseEvent& event)
{
	Destroy();
}
