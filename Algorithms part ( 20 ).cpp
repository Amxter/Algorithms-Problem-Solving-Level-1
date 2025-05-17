

#include <iostream>

using namespace std;

float Arae(float num1 , float num2 )
{
	float PI = 3.14 ;

	return (PI * pow(num2, 2)/ 4)* ((2 * num1 - num2) / (2 * num1 + num2));




}


int main()

{
	float num1, num2;
	cout << "plaese anter a base length ? \n ";
	cin >> num1;
	cout << "plaese anter a rib length ? \n ";
	cin >> num2 ;
	cout << "\n\n";
	cout << Arae(num1 , num2 );

}