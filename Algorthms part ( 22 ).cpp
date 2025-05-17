

#include <iostream>
#include <cmath>

using namespace std;

void  Read_Triangle_Data(float &num1, float &num2)
{

	cout << "please enter Triangle side A  ?? \n";
	cin >> num1;
	cout << "please enter Triangle side  B ?? \n";
	cin >> num2;


}

float calculater_Area_Triangle(float num1 , float num2 )
{
	const float pi = 3.141592653;

	float Area = ((pi * pow(num2, 2)) / 4) * ((2 * num1 - num2) / (2 * num1 + num2));

	return Area;

}

void print_Area(float Area)
{

	cout << " circle Area = " << Area;


}



int main()
{
	float num1 , num2  ;

	Read_Triangle_Data(num1, num2);


	print_Area(calculater_Area_Triangle(num1, num2));


}

