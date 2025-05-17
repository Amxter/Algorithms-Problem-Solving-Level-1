

#include <iostream>
#include <cmath>

using namespace std;

void  Read_Triangle_Data(float& num1, float& num2, float& num3 )
{

	cout << "please enter Triangle side A  ?? \n";
	cin >> num1;
	cout << "please enter Triangle base  B ?? \n";
	cin >> num2;
	cout << "please enter Triangle side  B ?? \n";
	cin >> num3;

}

float calculater_Area_Triangle(float num1, float num2 , float num3 )
{
	const double pi = 3.14;
	float rislot;
	rislot = (num1 + num2 + num3) / 2;

	double total = ((num1 * num2 * num3) / (4 * sqrt(rislot * (rislot - num1) * (rislot - num2) * (rislot - num3))));

	return pi * pow(total, 2);

}

void print_Area(float Area)
{

	cout << " circle Area = " << Area;


}



int main()
{
	float num1, num2 , num3 ;

	Read_Triangle_Data(num1, num2 , num3 );
	print_Area(calculater_Area_Triangle(num1, num2 , num3 ));


}

