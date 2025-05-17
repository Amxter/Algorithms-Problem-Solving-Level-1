
#include <iostream>
using namespace std;

enum en_operation_type { add = '+' , subtract = '-' , multiply = '*' , divide = '/' };

float Read_number(string message)
{
	float num;

	cout << message << endl;
	cin >> num;

	return num ;



}

en_operation_type read_operation_type ()
{
	char operation_type = '+';
	cout << "please erter a operation type ( + , - , * , / ) ??" << endl;
	cin >> operation_type;

		return (en_operation_type) operation_type;

}

float calculate(float num1, float num2, en_operation_type operation_type)

{

	switch (operation_type)
	{
	case en_operation_type::add:
		return  num1 + num2;
	case en_operation_type::subtract:
		return  num1 - num2;
	case en_operation_type::multiply:
		return  num1 * num2;
	case en_operation_type::divide:
		return  num1 / num2;
	default:
		return  num1 + num2;

	}
}

int main()

{
	int num1 = Read_number("please enter a first number ?? ");
	int num2 = Read_number("please enter a secunde number ?? ");

	en_operation_type operation_type = read_operation_type();
	cout << "Result =  " << calculate(num1, num2, operation_type);


}
