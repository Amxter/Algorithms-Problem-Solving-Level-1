

#include <iostream>
 
using namespace std;
struct st_Piggy_Bank_Contenet
{
	int penny, nickel, dime, quarter, dollar;

 };

st_Piggy_Bank_Contenet Read_Piggy_Bank_Contenet  ()
{
	st_Piggy_Bank_Contenet Piggy_Bank_Contenet;
	cout << "please entan a numbers penny ?\n ";
	cin >> Piggy_Bank_Contenet.penny;
	cout << "please entan a numbers nickel ?\n ";
	cin >> Piggy_Bank_Contenet.nickel;
	cout << "please entan a numbers dime ?\n ";
	cin >> Piggy_Bank_Contenet.dime;
	cout << "please entan a numbers quarter ?\n ";
	cin >> Piggy_Bank_Contenet.quarter;
	cout << "please entan a numbers doiiar ?\n ";
	cin >> Piggy_Bank_Contenet.dollar;


	return Piggy_Bank_Contenet ;

}

int calculate_Total_pennies(st_Piggy_Bank_Contenet Read_Piggy_Bank_Contenet)

{
	int Total_pennies = 0;

	Total_pennies = Read_Piggy_Bank_Contenet.penny + Read_Piggy_Bank_Contenet.nickel * 5 + Read_Piggy_Bank_Contenet.dime * 10 + Read_Piggy_Bank_Contenet.quarter * 25 + Read_Piggy_Bank_Contenet.dollar * 100;

	return Total_pennies;

}


int main()
{
	int Total_pennies = calculate_Total_pennies(Read_Piggy_Bank_Contenet()); 
	
	cout << "Total pennies" << Total_pennies << endl ;
	cout << "Total dollars" << (float)Total_pennies / 100 << endl ;


}

