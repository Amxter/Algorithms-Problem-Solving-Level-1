

#include <iostream>
using namespace std;

string read_pin_code()
{
	string pin_code;

	cout << "please enter a PIN code ?? " << endl ;
	cin >> pin_code;

	return pin_code;


}


bool loign()
{
	string pin_code;

	do
	{
		 pin_code = read_pin_code(); 

		if (pin_code == "1234")
		{

			return true;
		}
		else
		{

			cout << "\n Wrong PIN  \n";
			system("color 4F");

		}


	} while ( pin_code != "1234"); 









}

int main()
{

	if (loign())
	{
		system("color 2F");
		cout << "\n your acciunt bakabce is " << 7500 << '\n';



	}

}
