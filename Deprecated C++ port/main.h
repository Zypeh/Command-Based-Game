//---------------------------------------------------------------------------
//
// Name:        Text GameApp.h
// Author:      JunDong
// Created:     13/6/2015 5:48:05 PM
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __TEXT_GAMEFRMApp_h__
#define __TEXT_GAMEFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Text_GameFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
