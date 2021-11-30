#include <iostream>
#include <string>

using namespace std;
int currestStatus = 0;
int status[4][4] = { {0, 0, 0, 1}, {1, 2, 0, 1}, {1, 2, 2, 3}, {3, 3, 2, 3} };
string color, entry = "";

int main()
{
    while (entry != "end")
    {
        cout << "Zadajte hodnoty a,b napr. 1,0" << endl;
        cin >> entry;
        if (entry.compare("0,0") == 0)
        {
            currestStatus = status[currestStatus][0];
        }
        else if (entry.compare("1,0") == 0)
        {
            currestStatus = status[currestStatus][1];
        }
        else if (entry.compare("1,1") == 0)
        {
            currestStatus = status[currestStatus][2];
        }
        else if (entry.compare("0,1") == 0)
        {
            currestStatus = status[currestStatus][3];
        }

        cout << "Momentalne je automat v stave: S " << currestStatus << endl;

        if (currestStatus < 2) 
        {
            color = "Zelena";
            cout << "Aktualne svieti: " << color << endl;
        }
        else
        {
            color = "Cervena";
            cout << "Aktualne svieti: " << color << endl;
        }
    }
}

