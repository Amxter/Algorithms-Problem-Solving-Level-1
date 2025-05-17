

#include <iostream>
using namespace std;

float Read_positive_Number(string message)
{
	float num = 0;


	do
	{
		cout << message << endl;
		cin >> num;

	} while (num <= 0);


	return num;

}

int calculate_total_manthe(float LoonAmomunt, float MonthlyPayment)
{

	return (float) (LoonAmomunt / MonthlyPayment);



}

int main()

{

	float LoonAmomunt = Read_positive_Number("please enter of LoonAmomunt ?");
	float MonthlyPayment = Read_positive_Number("please enter of MonthlyPayment ?");


	cout << "Total Manthe " << calculate_total_manthe(LoonAmomunt, MonthlyPayment);







}

