

#include <iostream>
#include <cmath>

using namespace std;

void Read_number(float& num1, float& num2)
{

	cout << "please enter a diagonal ?? \n";
	cin >> num1;
	cout << "please enter a side area ?? \n";
	cin >> num2;


}

int calculater_Area(float num1, float num2)
{


	float Area = num1 * num2 * 0.5 ;

	return Area;

}

void print_Area(float Area)
{

	cout << "Area = " << Area;


}



int main()
{
	float num1, num2;

	Read_number(num1, num2);
	print_Area(calculater_Area(num1, num2));


}


