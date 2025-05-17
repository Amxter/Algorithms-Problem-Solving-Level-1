

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

int calculate_total_manthe(float LoonAmomunt, float How_many_minths)
{

	return  LoonAmomunt / How_many_minths ;



}

int main()

{

	float LoonAmomunt = Read_positive_Number("please enter of LoonAmomunt ?");
	float How_many_minths = Read_positive_Number("please enter a How_many_minths ?");


	cout << " Many Months are " << calculate_total_manthe(LoonAmomunt, How_many_minths);







}
