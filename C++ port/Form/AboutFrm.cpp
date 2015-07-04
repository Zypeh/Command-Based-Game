///-----------------------------------------------------------------
///
/// @file      AboutFrm.cpp
/// @author    JunDong
/// Created:   14/6/2015 6:23:46 PM
/// @section   DESCRIPTION
///            AboutFrm class implementation
///
///------------------------------------------------------------------

#include "AboutFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
#include "Images/AboutFrm_WxStaticBitmap1_XPM.xpm"
////Header Include End

//----------------------------------------------------------------------------
// AboutFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(AboutFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(AboutFrm::OnClose)
END_EVENT_TABLE()
////Event Table End

AboutFrm::AboutFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

AboutFrm::~AboutFrm()
{
}

void AboutFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	wxInitAllImageHandlers();   //Initialize graphic format handlers

	WxBoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	this->SetSizer(WxBoxSizer1);
	this->SetAutoLayout(true);

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(0, 0), wxSize(300, 300));
	WxBoxSizer1->Add(WxPanel1, 0, wxALIGN_CENTER | wxALL, 0);

	WxFlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
	WxPanel1->SetSizer(WxFlexGridSizer1);
	WxPanel1->SetAutoLayout(true);

	wxBitmap WxStaticBitmap1_BITMAP(AboutFrm_WxStaticBitmap1_XPM);
	WxStaticBitmap1 = new wxStaticBitmap(WxPanel1, ID_WXSTATICBITMAP1, WxStaticBitmap1_BITMAP, wxPoint(10, 23), wxSize(62, 53));
	WxFlexGridSizer1->Add(WxStaticBitmap1, 0, wxALIGN_CENTER | wxALL, 10);

	WxStyledTextCtrl1 = new wxStyledTextCtrl(WxPanel1, ID_WXSTYLEDTEXTCTRL1, wxPoint(87, 5), wxSize(185, 89), 0,  _("WxStyledTextCtrl1"));
	WxStyledTextCtrl1->Enable(false);
	WxStyledTextCtrl1->AppendText(_("WxStyledTextCtrl1"));
	WxStyledTextCtrl1->SetFocus();
	WxFlexGridSizer1->Add(WxStyledTextCtrl1, 0, wxALIGN_CENTER | wxALL, 5);

	SetTitle(_("About"));
	SetIcon(wxNullIcon);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
}

void AboutFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}
