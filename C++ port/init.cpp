#include <iostream>

using namespace std;

#include "UX/Frame.h"

IMPLEMENT_APP(TextBasedGame)

//Initialize the app
bool TextBasedGame::OnInit()
{
    MainFrame* frame = new MainFrame(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}

//Upon exiting the app
int TextBasedGame::OnExit()
{
    return 0;
}
