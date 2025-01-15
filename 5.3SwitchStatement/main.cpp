#include <iostream>
using namespace std;

const int PEN = 10;
const int MARKER = 20;
const int ERASER = 30;
const int RULER = 40;

int main()
{
    int tool = RULER;
    // condition: integral types and enums... int, long, unsigned short, etc.
    // NO STRINGS
    switch(tool)
    {
        case PEN:
        {
            cout << "\nActive tool: Pen\n";
        }
        break;
        case MARKER:
        {
            cout << "\nActive tool: Marker\n";
        }
        break;
        case ERASER:
        {
            cout << "\nActive tool: Eraser\n";
        }
        break;
        case RULER:
        {
            cout << "\nActive tool: Ruler\n";
        }
        break;
        default:
        {
            cout << "\nNo tool selected!\n";
        }
    }


    cout << "\n*****************\n";

    //ANOTHER EXAMPLE, without constants    
    int temperature = 20;
    switch(temperature)
    {
        case 20:
        {
            cout << "temperature = 20";
        }
        // break is NECESSARY to stop processing switch block after successful case has been found, without it, all following cases after current case will be executed
        break;
        case 25:
        {
            cout << "temperature = 25";
        }
        break;
        case 30:
        {
            cout << "temperature = 30";
        }
        break;
        default:
        {
            cout << "temperature is not 20, 25, or 30";
        }
    }

    return 0;
}