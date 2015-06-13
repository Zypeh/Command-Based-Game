///-----------------------------------------------------------------
///
/// @file      Text Game Main.cpp
/// @author    JunDong
/// Created:   13/6/2015 5:48:05 PM
/// @section   DESCRIPTION
///            Text_GameFrm class implementation
///
///------------------------------------------------------------------

#include "Text Game Main.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Text_GameFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Text_GameFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Text_GameFrm::OnClose)
END_EVENT_TABLE()
////Event Table End

Text_GameFrm::Text_GameFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Text_GameFrm::~Text_GameFrm()
{
}

void Text_GameFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxBoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	this->SetSizer(WxBoxSizer1);
	this->SetAutoLayout(true);

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(0, 0), wxSize(330, 330));
	WxBoxSizer1->Add(WxPanel1, 0, wxALIGN_CENTER | wxALL, 0);

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_MENUITEM1_1014_Mnu_Obj = new wxMenu();
	ID_MNU_MENUITEM1_1014_Mnu_Obj->Append(ID_MNU_SAVE____1015, _("Save..."), _(""), wxITEM_NORMAL);
	ID_MNU_MENUITEM1_1014_Mnu_Obj->Append(ID_MNU_LOAD____1016, _("Load..."), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_MENUITEM1_1014_Mnu_Obj, _("Game"));
	
	wxMenu *ID_MNU_ABOUT_1017_Mnu_Obj = new wxMenu();
	WxMenuBar1->Append(ID_MNU_ABOUT_1017_Mnu_Obj, _("About"));
	SetMenuBar(WxMenuBar1);

	WxEdit1 = new wxTextCtrl(WxPanel1, ID_WXEDIT1, _("Type here..."), wxPoint(5, 300), wxSize(320, 25), 0, wxDefaultValidator, _("WxEdit1"));

	WxRichTextCtrl1 = new wxRichTextCtrl(WxPanel1, ID_WXRICHTEXTCTRL1, _(""), wxPoint(5, 5), wxSize(320, 290), wxRE_READONLY | wxRE_MULTILINE, wxDefaultValidator, _("WxRichTextCtrl1"));
	WxRichTextCtrl1->SetMaxLength(0);
	WxRichTextCtrl1->Enable(false);
	WxRichTextCtrl1->AppendText(_("WxRichTextCtrl1"));
	WxRichTextCtrl1->SetFocus();
	WxRichTextCtrl1->SetInsertionPointEnd();

	SetTitle(_("Text Game"));
	SetIcon(wxNullIcon);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
}

void Text_GameFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * CloseClick
 */
void Text_GameFrm::CloseClick(wxCommandEvent& event)
{
	Destroy();
}
