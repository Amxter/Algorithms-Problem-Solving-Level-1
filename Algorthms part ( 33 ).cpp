

#include <iostream>
using namespace std;

int Read_grade( int from , int to )
{
	int Grade;

	do 
	{
		cout << "please enter a Grade ?? \n";
		cin >> Grade; 

	} while (Grade > from || Grade <   to);

	return Grade ; 
	 

}

char Get_Grade_letter(int Grade)
{

	if (Grade >= 90 && Grade <= 100)
	{

		return  'A';

	}
	else if (Grade >= 80 && Grade <= 89)
	{


		return 'B';

	}
	else if (Grade >= 70 && Grade <= 79)
	{


		return 'C';

	}
	else if (Grade >= 60 && Grade <= 69)
	{


		return 'D';

	}
	else if (Grade >= 50 && Grade <= 59)
	{


		return 'E';

	}
	else if (Grade >= 0 && Grade <= 49)
	{

		return 'F';

	}



}

int main()
{

	
	cout << endl << "Result = " << Get_Grade_letter(Read_grade(100, 0));



}  



