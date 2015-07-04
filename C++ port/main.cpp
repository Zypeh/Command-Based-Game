#include <iostream>

using namespace std;

#include "UX/Frame.h"

IMPLEMENT_APP(TextBasedGame)

float version = 0.1f;

bool TextBasedGame::OnInit()
{
    MainFrame* frame = new MainFrame(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}

int TextBasedGame::OnExit()
{
    return 0;
}
