#include<iostream>
using namespace std;

int main()
{
    int birthyear;
    cout << "enter your birthyear ";
    cin >> birthyear;
    if (birthyear > 2022) //hier komen alle jaren die niet mee doen
    {
       cout << "go back to the future";
       return 1;
    }
    if (birthyear == 2022)
    {
        cout << "ben pas een geboren en kan al typen dat is knap";
        return 1;
    }
    if (birthyear < 0)
    {
        cout<< "geweldig oud ben jij";
        return 1;
    }
    if (birthyear ==0)
    {
        cout << "ben jij jesus?";
        return 1;
    }
    if (birthyear > 2012)
    {
        cout << "te jong!";
        return 1;
    }
    if (birthyear < 1922)
    {
        cout << "ouder dan honderd en kan nog typen geweldig! maar doei";
        return 1;
    }
    int month;
    cout << "enter your birth month "; //en hier alle maanden die niet mee doen
    cin >> month;
    if (month == 69)
    {
        cout << "nice ;) ";
    }
    if (month > 12)
    {
        cout << "dat bestaat niet eens!";
        return 1;
    }
    if (month <= 0)
    {
        cout << "dat bestaat nog minder";
        return 1;
    }



}
