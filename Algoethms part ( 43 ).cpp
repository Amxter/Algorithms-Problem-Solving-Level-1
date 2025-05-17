



#include <iostream>
#include <cmath>

using namespace std;


int main()

{


	int numberDays, numberhours, numberminutes, numberseconds  , Remainder  ;

	int NambersOfSeconds ;

	cout << "please enter a number Days ?? \n ";
	cin >> NambersOfSeconds;


	numberDays = floor(NambersOfSeconds / (24 * 60 * 60)) ;
	Remainder =  NambersOfSeconds % (24 * 60 * 60);
	numberhours = floor(Remainder / ( 60 * 60));
	Remainder = Remainder % (60 * 60);
	numberminutes = floor(Remainder / (60));
	Remainder = Remainder % (60) ;
	numberseconds = floor(Remainder);
	


	cout << numberDays << ":" << numberhours << ":" << numberminutes << ":" << numberseconds;






}