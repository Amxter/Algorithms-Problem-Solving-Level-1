

#include <iostream>
using namespace std;

void  Read_number(int& num1, int& num2)
{

	cout << "plase enter a farst Number?\n ";
	cin >> num1 ;
	cout << "plase enter a socand Number?\n ";
	cin >> num2 ;


}

void swap(int& num1, int& num2)
{
	int x;
	x = num1;
	num1 = num2;
	num2 = x;
}

void print_number(int num1, int num2)
{
	cout << "You farst number : " << num1 << endl;
	cout << "You socand number : " << num2 << endl << endl ;

}

int main()
{
	int num1 , num2 ;
	Read_number(num1, num2);
	print_number(num1, num2);
	swap(num1, num2);
	print_number(num1, num2);


}

