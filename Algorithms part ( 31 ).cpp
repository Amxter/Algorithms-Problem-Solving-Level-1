

#include <iostream>
using namespace std;


int Read_number()
{
	int  num ;
	cout << "plaese enter a numbar ?\n";
	cin >> num ;

	return num; 

}

void powre_of_2_3_4(int num)
{

	int a, b, c; 

	a = num * num;
	b = num * num * num;
	c = num * num * num * num; 

	cout << a << " " << b << " " << c; 


}


int main()
{
	

	powre_of_2_3_4(Read_number());


		
}


 