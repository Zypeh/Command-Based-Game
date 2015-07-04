#include <iostream>

using namespace std;

#include "InputHandler/commandHandler.h"

float version = 0.1f;

int main()
{
    string input = "";
    cout << "Text-Based Game v" << version << " pre-alpha" << endl;

    while(true)
    {
        cin >> input;
        string output = Handler(input);

        if (output == "0")
        {
            break;
        }
    }

    return 0;
}
