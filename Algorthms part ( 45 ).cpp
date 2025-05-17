
#include <iostream>
using namespace std;

enum en_month_of_yrar { January = 1, feb = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 
};

int Read_number_in_range(string Message, int from, int to)
{
	int num = 0;

	do
	{

		cout << Message << endl;
		cin >> num;


	} while (num > from || num < to);


	return num;
}

en_month_of_yrar Read_Day_of_week()
{


	return (en_month_of_yrar)Read_number_in_range("please enter a number mouth  { 12 To 0 } ", 12, 0);

}

string read_day_of_wrrk(en_month_of_yrar month )
{
	switch (month)
	{
	case en_month_of_yrar::January:
		return "\nIts January \n";
		
	case en_month_of_yrar::March:
		return "\nIts March \n";
		
	case en_month_of_yrar::feb:
		return "\nIts feb \n";
		
	case en_month_of_yrar::April :
		return "\nIts April \n";
		
	case en_month_of_yrar::May:
		return "\nIts May \n";
		
	case en_month_of_yrar::June :
		return "\nIts June \n";
		
	case en_month_of_yrar::July:
		return "\nIts July \n";
		
	case en_month_of_yrar::August:
		return "\nIts August \n";
		
	case en_month_of_yrar::September:
		return "\nIts September \n";
		
	case en_month_of_yrar::October:
		return "\nIts October \n";
		
	case en_month_of_yrar::November:
		return "\nIts November \n";
		
	case en_month_of_yrar::December :
		return "\nIts December \n";
		
	default:
		return "\n Wrong Month \n";
	}


}

int main()
{


	cout << read_day_of_wrrk(Read_Day_of_week());


}

