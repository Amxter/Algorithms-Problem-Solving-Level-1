

#include <iostream>
#include <string>
using namespace std;


enum en_Number_Type { Opp = 1, even = 2 };


int Read_Number()
{

	int num;
	cout << "please enter a number ?? " << endl ;
	cin >> num ;
	return num;
}

en_Number_Type check_Number_Type(int num )
{
	float Result = num % 2;

	if (Result == 0)
	{	
		return en_Number_Type::even;
	}
	else
	{
		return en_Number_Type::Opp ;
	}
}

void Print_Number_Type(en_Number_Type Number)

{
	if (Number == en_Number_Type::Opp)
	{
		cout << " Namber is Opp  " << endl ;
	}
	else
	{
		cout << " Namber is even  " << endl;
	}

}


int main()
{
	
	Print_Number_Type(check_Number_Type(Read_Number())) ;

	
}
