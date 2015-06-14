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

	WxBoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	this->SetSizer(WxBoxSizer1);
	this->SetAutoLayout(true);

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(0, 0), wxSize(300, 300));
	WxBoxSizer1->Add(WxPanel1, 0, wxALIGN_CENTER | wxALL, 0);

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
