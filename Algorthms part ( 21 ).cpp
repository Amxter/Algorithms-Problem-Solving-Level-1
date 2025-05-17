

#include <iostream>
#include <cmath>

using namespace std;

float Read_Circumference()
{
	float num1;
	cout << "please enter Circumference circle  ?? \n";
	cin >> num1;


	return num1;
}

float calculater_Area_circle_By_Circumference(float num1)
{
	const float pi = 3.141592653;

	float Area = (pow(num1, 2)) / (4 * pi) ;

	return Area;

}

void print_Area(float Area)
{

	cout << " circle Area = " << Area;


}



int main()
{
	float num1;


	print_Area(calculater_Area_circle_By_Circumference(Read_Circumference()));


}



