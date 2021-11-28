
#include <iostream>
#include <fstream>
#include <iostream>

using namespace std;

bool check_number(string str) 
{
    int dot = 1;
    int polarity = 1;


    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]) == false)
        {
            if (str[i] == ' ')
            {
                continue;
            }
            else if (str[i] == '.' && dot == 1)
            {
                dot--;
                polarity--;
                continue;
            }
            else if (str[i] == '+' && polarity == 1 || str[i] == '-' && polarity == 1)
            {
                polarity--;
                continue;
            }
            else
            {            
                cout << str << " is a string" << endl;
                break;
            }
        }
        else
        {
            if (i == (str.length() -1))
            {
                cout << str << " is an number" << endl;
            }
            else
            {
                continue;
            }
        }
    }
}

int main() 
{
    string x="00000002a2";

    cout << "Pls give a number: ";

    //cin >> x; 

    check_number(x);
}