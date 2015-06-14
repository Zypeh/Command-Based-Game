///-----------------------------------------------------------------
///
/// @file      Text Game Main.cpp
/// @author    JunDong
/// Created:   13/6/2015 5:48:05 PM
/// @section   DESCRIPTION
///            Text_GameFrm class implementation
///
///------------------------------------------------------------------

#include "Game-MainFrm.h"

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
	EVT_TEXT_ENTER(ID_INPUT,Text_GameFrm::InputEnter)
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
	WxBoxSizer1->Add(WxPanel1, 1, wxALIGN_CENTER | wxEXPAND | wxALL, 0);

	WxBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	WxPanel1->SetSizer(WxBoxSizer2);
	WxPanel1->SetAutoLayout(true);

	Output = new wxTextCtrl(WxPanel1, ID_OUTPUT, wxEmptyString, wxPoint(5, 5), wxSize(185, 89), wxTE_READONLY | wxTE_LEFT | wxTE_MULTILINE, wxDefaultValidator, _("Output"));
	Output->SetMaxLength(0);
	Output->SetFocus();
	Output->SetInsertionPointEnd();
	WxBoxSizer2->Add(Output, 1, wxALIGN_CENTER | wxEXPAND | wxALL, 5);

	/* Hello
	*/
	Input = new wxTextCtrl(WxPanel1, ID_INPUT, wxEmptyString, wxPoint(5, 99), wxSize(185, 25), wxTE_NO_VSCROLL | wxTE_LEFT | wxTE_MULTILINE, wxDefaultValidator, _("Input"));
	Input->SetMaxLength(0);
	Input->AppendText(_("Type Here....."));
	Input->SetFocus();
	Input->SetInsertionPointEnd();
	WxBoxSizer2->Add(Input, 0, wxALIGN_CENTER | wxEXPAND | wxLEFT | wxRIGHT | wxBOTTOM, 5);

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_MENUITEM1_1014_Mnu_Obj = new wxMenu();
	ID_MNU_MENUITEM1_1014_Mnu_Obj->Append(ID_MNU_SAVE____1015, _("Save..."), _(""), wxITEM_NORMAL);
	ID_MNU_MENUITEM1_1014_Mnu_Obj->Append(ID_MNU_LOAD____1016, _("Load..."), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_MENUITEM1_1014_Mnu_Obj, _("Game"));
	
	wxMenu *ID_MNU_ABOUT_1017_Mnu_Obj = new wxMenu();
	WxMenuBar1->Append(ID_MNU_ABOUT_1017_Mnu_Obj, _("About"));
	SetMenuBar(WxMenuBar1);

	SetTitle(_("Text Based Game"));
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
void Text_GameFrm::OnSave(wxCommandEvent& WXUNUSED(event))
{
	wxFileDialog
	   saveFileDialog(this, _("Save game file"), "", "",
                      "JSON files (*json)|*.json",
                      wxFD_SAVE|wxFD_OVERWRITE_PROMPT);
    
    //Do saving code here               
    if (saveFileDialog.ShowModal() == wxID_CANCEL)
        return;

    //Need saving validation
}

/*
 * OnLoad
 */
void Text_GameFrm::OnLoad(wxCommandEvent& WXUNUSED(event))
{
    wxFileDialog 
        openFileDialog(this, _("Load game file"), "", "",
                       "JSON files (*.json)|*.json", 
                       wxFD_OPEN|wxFD_FILE_MUST_EXIST);
                       
    //Do loading code here
    if (openFileDialog.ShowModal() == wxID_CANCEL)
        return;
        
    //Need loading validation, goto "http://docs.wxwidgets.org/trunk/classwx_file_dialog.html"
}



/*
 * InputEnter
 */
void Text_GameFrm::InputEnter(wxCommandEvent& event)
{
    Output->AppendText(Input->GetValue());
    if (Input->GetValue() == ""){
        return;   
    }
    Input->SetValue(wxT(""));
    Output->AppendText(_("\n"));
}
