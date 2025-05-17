#include <iostream>
using namespace std;

void MyName(string Name )
{
    cout << endl << Name ;
}



int main()
{
    string Name;
    cout << "please enter a name ??\n"; 
    cin >> Name;

    MyName(Name);

}