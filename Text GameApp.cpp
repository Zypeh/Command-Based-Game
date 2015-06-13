//---------------------------------------------------------------------------
//
// Name:        Text GameApp.cpp
// Author:      JunDong
// Created:     13/6/2015 5:48:05 PM
// Description: 
//
//---------------------------------------------------------------------------

#include "Text GameApp.h"
#include "Text Game Main.h"

IMPLEMENT_APP(Text_GameFrmApp)

bool Text_GameFrmApp::OnInit()
{
    Text_GameFrm* frame = new Text_GameFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int Text_GameFrmApp::OnExit()
{
	return 0;
}
