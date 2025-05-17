

#include <iostream>
using namespace std;

enum en_pass_fail { pass= 1 , fail = 2 };

int Read_Mark()
{
	int Mark;
	cout << "Please enter a mark ??\n ";
	cin >> Mark;

	return Mark;
}

en_pass_fail Chak_Mark(int Mark)
{

	if (Mark >= 50)

		return en_pass_fail::pass ;
	else

		return en_pass_fail::fail ;

}

void Print_result(int Mark)
{
	if (Chak_Mark(Mark) == en_pass_fail::pass)

		cout << " you Passed " << endl;
	else
		cout << " you Failed " << endl;


}


int main()
{
	
	Print_result(Read_Mark());


}
