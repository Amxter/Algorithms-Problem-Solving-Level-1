
#include <iostream>
using namespace std;

void Read_number(int &num1, int &num2, int &num3 )
{

	cout << "plase  enter a first Number ?\n "  ;
	cin >>  num1 ;
	cout << "plase  enter a socand Number ?\n " ;
	cin >>  num2 ;
	cout << "plase  enter a three Number ?\n " ;
	cin >>  num3 ;

	//return num1, num2, num3;
}

int calculeter_sum_Mark(int num1, int num2, int num3)
{
	

	return  num1 + num2 + num3;
}

void print_sum_Mark( int sum )
{

	cout <<  endl <<" Totl Number = " << sum << endl ;

}

int main()
{
	int  num1 , num2, num3;
	Read_number(num1, num2, num3);
	print_sum_Mark(calculeter_sum_Mark(num1, num2, num3));

}

