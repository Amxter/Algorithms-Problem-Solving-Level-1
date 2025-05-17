

#include <iostream>

using namespace std;

int main()
{
   
	unsigned short int days, hours, minutes, seconds;

	cout << "please enter Number of days ? \n";
	cin >> days;
	cout << "please enter Number of hours ? \n";
	cin >> hours;
	cout << "please enter Number of minutes ? \n";
	cin >> minutes;
	cout << "please enter Number of seconds ? \n";
	cin >> seconds ;


	cout << (days * 60 * 60 * 24) + (hours * 60 * 60) + (minutes * 60) + seconds << " seconds";










}

