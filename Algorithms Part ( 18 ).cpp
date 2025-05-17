

#include <iostream>
#include <cmath>

using namespace std;

float Read_number( )
{
	float num1;
	cout << "please enter radious ?? \n";
	cin >> num1;


	return num1;
}

float calculater_Area(float num1 )
{
	const float pi = 3.141592653; 

	float Area = pi * pow(num1, 2);

	return Area;

}

void print_Area(float Area)
{

	cout << "Area = " << Area;


}



int main()
{
	float num1 ;

	
	print_Area(calculater_Area(Read_number()));


}