


#include <iostream>

using namespace std;

void Read_number(float& num1, float& num2)
{
	cout << "please enter a length of the rib ? \n ";
	cin >> num1;
	cout << "please enter a ard of the rib ? \n ";
	cin >> num2;

}

float  calculater_Area(float num1, float num2)

{

	return num1 * num2;

}

void print_Area(float Area)
{

	cout << "Area :  " << Area << endl;


}

int main()

{
  
	float num1, num2 ; 
	Read_number(num1, num2);
	print_Area(calculater_Area(num1, num2));
}
