#include<iostream>
using namespace std;

int main()
{
    int birthyear;
    cout << "enter your birthyear ";
    cin >> birthyear;
    int month;
    cout << "enter your birth month ";
    cin >> month;
    int birthdate;
    cout << "enter your birthdate";
    cin >> birthdate;
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
    if (month == 69)//en hier alle maanden die niet mee doen
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
    int yearc = 2022;
    cout << "dit is ongeveer you leeftijd in jaren ";
    if (month > 9)
    {
    cout << yearc - birthyear -1;
    return 0;
    }
    if (month < 9)
    {
        cout << yearc - birthyear;
    }
    if (month == 9)
    {
        if (birthdate < 17)
        {
            cout << yearc - birthyear -1;
        }
        if (birthyear >= 17)
        {
            cout << yearc - birthyear;
        }
        if (birthyear == 17)
        {
            cout << "Happy birthday!";
        }
    }
    return 0;


}
