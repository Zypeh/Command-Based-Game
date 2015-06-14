///-----------------------------------------------------------------
///
/// @file      Text Game Main.h
/// @author    JunDong
/// Created:   13/6/2015 5:48:05 PM
/// @section   DESCRIPTION
///            Text_GameFrm class declaration
///
///------------------------------------------------------------------

#ifndef __TEXT_GAMEFRM_H__
#define __TEXT_GAMEFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/sizer.h>
////Header Include End

////Dialog Style Start
#undef Text_GameFrm_STYLE
#define Text_GameFrm_STYLE wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxMAXIMIZE_BOX | wxCLOSE_BOX | wxFRAME_SHAPED
////Dialog Style End

class Text_GameFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		Text_GameFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Text Game"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Text_GameFrm_STYLE);
		virtual ~Text_GameFrm();
		void CloseClick(wxCommandEvent& event);
		void AboutClick(wxCommandEvent& event);
		void Mnumenuitem11014Click(wxCommandEvent& event);
		void OnSave(wxCommandEvent& event);
		void OnLoad(wxCommandEvent& event);
		void WxMemo1Updated(wxCommandEvent& event);
		void WxEdit1Updated(wxCommandEvent& event);
		void InputUpdated(wxCommandEvent& event);
		void InputEnter(wxCommandEvent& event);
		void InputClickUrl(wxTextUrlEvent& event);
		void InputUpdateUI(wxUpdateUIEvent& event);
		void InputUpdated0(wxCommandEvent& event);
		void InputUpdated1(wxCommandEvent& event);
		void InputUpdated2(wxCommandEvent& event);
		void InputClickUrl0(wxTextUrlEvent& event);
		void Text_GameFrmSetFocus(wxFocusEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxMenuBar *WxMenuBar1;
		wxTextCtrl *Input;
		wxTextCtrl *Output;
		wxBoxSizer *WxBoxSizer2;
		wxPanel *WxPanel1;
		wxBoxSizer *WxBoxSizer1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_MNU_MENUITEM1_1014 = 1014,
			ID_MNU_SAVE____1015 = 1015,
			ID_MNU_LOAD____1016 = 1016,
			ID_MNU_ABOUT_1017 = 1017,
			
			ID_INPUT = 1041,
			ID_OUTPUT = 1040,
			ID_WXPANEL1 = 1036,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
