

#include <iostream>
#include <cmath>

using namespace std;

float Read_diameter()
{
	float num1;
	cout << "please enter diameter ?? \n";
	cin >> num1;


	return num1;
}

float calculater_Area_circle_By_diameter (float num1)
{
	const float pi = 3.141592653;

	float Area = (pi * pow(num1, 2)) / 4;;

	return Area;

}

void print_Area(float Area)
{

	cout << "Area circle  = " << Area;


}



int main()
{
	float num1;


	print_Area(calculater_Area_circle_By_diameter(Read_diameter()));


}



