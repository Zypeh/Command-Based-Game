//Class Implementation of Frame.h

//Frame includes
#include "Frame.h"
#include "About.h"

//Additional includes goes here
#include "../InputHandler/commandHandler.h"

//Additional wx includes goes here
#include "wx/colour.h"
#include "wx/gdicmn.h"
#include "wx/stdpaths.h"

//Announcing Event Handling
BEGIN_EVENT_TABLE(MainFrame,wxFrame)
    EVT_KEY_DOWN(MainFrame::OnKey)
    EVT_CLOSE(MainFrame::OnExit)
    EVT_MENU(ID_Save, MainFrame::OnSave)
    EVT_MENU(ID_Load, MainFrame::OnLoad)
    EVT_MENU(ID_About, MainFrame::OnAbout)
    EVT_MENU(ID_Exit, MainFrame::OnClose)
    EVT_TEXT_ENTER(ID_Input, MainFrame::OnEnter)
    EVT_UPDATE_UI(ID_Input, MainFrame::OnFocus)
END_EVENT_TABLE()

//Announcing function for later initialization
MainFrame::MainFrame(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
:wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

//Empty Destructor
MainFrame::~MainFrame()
{
}

wxString History[10];
int Hiscount = 0;
int CheckCount = 9;
bool inifocus = false; //check if the Input box was clicked on

//The main initializer
void MainFrame::CreateGUIControls()
{
    wxString exePath = wxStandardPaths::Get().GetDocumentsDir();

    AppSizer = new wxBoxSizer(wxHORIZONTAL);
    this->SetSizer(AppSizer);
    this->SetAutoLayout(true);

    Panel = new wxPanel(this, ID_Panel, wxPoint(0,0), wxSize(330,330));
    AppSizer->Add(Panel, 1, wxALIGN_CENTER|wxEXPAND|wxALL, 0);

    MainSizer = new wxBoxSizer(wxVERTICAL);
    Panel->SetSizer(MainSizer);
    Panel->SetAutoLayout(true);

    Output = new wxTextCtrl(Panel, ID_Output, wxEmptyString, wxPoint(5,5), wxSize(185,89), wxTE_RICH|wxTE_READONLY|wxTE_LEFT|wxTE_MULTILINE, wxDefaultValidator, _("Output"));
    Output->SetMaxLength(0);
    Output->SetFocus();
    MainSizer->Add(Output, 1, wxALIGN_CENTER|wxEXPAND|wxALL, 5);

    Input = new wxTextCtrl(Panel, ID_Input, wxEmptyString, wxPoint(5,99), wxSize(185,25), wxTE_LEFT|wxTE_NO_VSCROLL|wxTE_MULTILINE, wxDefaultValidator, _("Output"));
    Input->SetMaxLength(0);
    Input->AppendText("Input command here...");
    MainSizer->Add(Input, 0, wxALIGN_CENTER|wxEXPAND|wxLEFT|wxRIGHT|wxBOTTOM, 5);

    MenuBar = new wxMenuBar();
	wxMenu *ID_File = new wxMenu();
	wxMenu *MenuAbout = new wxMenu();
	MenuAbout->Append(ID_About, _("About\tF1"), _(""), wxITEM_NORMAL);
	ID_File->Append(ID_Save, _("Save...\tCtrl-S"), _(""), wxITEM_NORMAL);
	ID_File->Append(ID_Load, _("Load...\tCtrl-L"), _(""), wxITEM_NORMAL);
	ID_File->Append(ID_Exit, _("Exit\tAlt-F4"), _(""), wxITEM_NORMAL);
	MenuBar->Append(ID_File, _("File"));
	MenuBar->Append(MenuAbout, _("About"));
	SetMenuBar(MenuBar);

	SetTitle(_("Text Based Game"));
	SetIcon(wxIcon("Images/Icon.ico", wxBITMAP_TYPE_ICO));

	LoadFileDialog = new wxFileDialog(this, _("Load game file"), exePath, "", "JSON files (*.json)|*.json", wxFD_OPEN|wxFD_FILE_MUST_EXIST);
    SaveFileDialog = new wxFileDialog(this, _("Save game file"), exePath, "save.json", "JSON files (*json)|*.json", wxFD_SAVE|wxFD_OVERWRITE_PROMPT);
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
}

//Everything below is event handling

void MainFrame::OnSave(wxCommandEvent& event)
{
    //Do saving code here
    if (SaveFileDialog->ShowModal() == wxID_CANCEL)
        return;

    //Need saving validation
}

void MainFrame::OnLoad(wxCommandEvent& event)
{
    //Do loading code here
    if (LoadFileDialog->ShowModal() == wxID_CANCEL)
        return;

    //Need loading validation, goto "http://docs.wxwidgets.org/trunk/classwx_file_dialog.html"
}

void MainFrame::OnEnter(wxCommandEvent& event)
{
    if (Input->GetValue() == ""){
        return;
    }
    Output->SetDefaultStyle(wxTextAttr(*wxBLUE)); //Set colour as blue
    Output->AppendText(Input->GetValue());              // Shows whatever in the input box
    Output->AppendText(_("\n"));                        // Endline
    std::string in = std::string(Input->GetValue());    // Assign a new std::string with the Input value
    std::string * add = &in;                            // Assign pointer on the new std::string
    if (Hiscount < 10){
        History[Hiscount] = Input->GetValue();
        Hiscount++;
    }
    else
    {
        int j;
        for (int i = 9; i > 0; i--)
        {
            j = i - 1;
            History[j] = History[i];
        }
        History[Hiscount-1] = Input->GetValue();
    }
    Handler(add);                                       // CommandHandler
    wxString mystring(in);                              // Convert the std::string into wxString
    Output->SetDefaultStyle(wxTextAttr(wxNullColour));  // Revert the colour
    Output->AppendText(in);                             // Show the output from the Handler
    Output->AppendText(_("\n"));                        // Endline
    Input->SetValue(wxT(""));                           // Clear out the Input box
}

void MainFrame::OnFocus(wxUpdateUIEvent& event)
{
    if (inifocus == false && Input->HasFocus()){
        Input->SetValue(wxT(""));
        inifocus = true;
    }
    return;
}

void MainFrame::OnAbout(wxCommandEvent& event)
{
	About* aframe = new About(this);
	aframe->Show();
}

void MainFrame::OnExit(wxCloseEvent& event)
{
	Destroy();
}

void MainFrame::OnClose(wxCommandEvent& event)
{
    Destroy();
}

void MainFrame::OnKey(wxKeyEvent& event)
{
    int keycode = event.GetKeyCode();
    if (keycode == WXK_DOWN){
        Input->SetValue(wxT("Testing"));
    }
    event.Skip();
}
