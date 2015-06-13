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
	EVT_MENU(ID_MNU_SAVE____1015, Text_GameFrm::OnSave)
	EVT_MENU(ID_MNU_LOAD____1016, Text_GameFrm::OnLoad)
	EVT_MENU(ID_MNU_ABOUT_1017, Text_GameFrm::AboutClick)
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

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_MENUITEM1_1014_Mnu_Obj = new wxMenu();
	ID_MNU_MENUITEM1_1014_Mnu_Obj->Append(ID_MNU_SAVE____1015, _("Save..."), _(""), wxITEM_NORMAL);
	ID_MNU_MENUITEM1_1014_Mnu_Obj->Append(ID_MNU_LOAD____1016, _("Load..."), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_MENUITEM1_1014_Mnu_Obj, _("Game"));
	
	wxMenu *ID_MNU_ABOUT_1017_Mnu_Obj = new wxMenu();
	WxMenuBar1->Append(ID_MNU_ABOUT_1017_Mnu_Obj, _("About"));
	SetMenuBar(WxMenuBar1);

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(0, 0), wxSize(330, 330));
	WxBoxSizer1->Add(WxPanel1, 1, wxALIGN_CENTER | wxEXPAND | wxALL, 0);

	WxBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	WxPanel1->SetSizer(WxBoxSizer2);
	WxPanel1->SetAutoLayout(true);

	WxRichTextCtrl1 = new wxRichTextCtrl(WxPanel1, ID_WXRICHTEXTCTRL1, _(""), wxPoint(5, 5), wxSize(320, 290), 0, wxDefaultValidator, _("WxRichTextCtrl1"));
	WxRichTextCtrl1->SetMaxLength(0);
	WxRichTextCtrl1->AppendText(_("WxRichTextCtrl1"));
	WxRichTextCtrl1->SetFocus();
	WxRichTextCtrl1->SetInsertionPointEnd();
	WxRichTextCtrl1->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));
	WxBoxSizer2->Add(WxRichTextCtrl1, 1, wxALIGN_CENTER | wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 5);

	WxEdit1 = new wxTextCtrl(WxPanel1, ID_WXEDIT1, _("Type here"), wxPoint(104, 300), wxSize(121, 25), 0, wxDefaultValidator, _("WxEdit1"));
	WxEdit1->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxNORMAL, false));
	WxBoxSizer2->Add(WxEdit1, 0, wxALIGN_CENTER | wxEXPAND | wxALL, 5);

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

/*
 * AboutClick
 */
void Text_GameFrm::AboutClick(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * OnSave
 */
void Text_GameFrm::OnSave(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * OnLoad
 */
void Text_GameFrm::OnLoad(wxCommandEvent& event)
{
	// insert your code here
}
