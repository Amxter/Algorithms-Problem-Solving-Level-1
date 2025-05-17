
#include <iostream>
using namespace std; 

enum en_Day_of_Week { Sat = 1 , Sun = 2 , Mon = 3 , Tue = 4 , Wed = 5 , Thu = 6 , Fri = 7   };

int Read_number_in_range (string Message, int from, int to)
{
    int num = 0 ; 

    do
    {

        cout << Message << endl ;
        cin >> num;


    } while (num > from || num < to);


        return num;
}

en_Day_of_Week Read_Day_of_week()
{

   
    return (en_Day_of_Week)Read_number_in_range("please enter a number day (Sat , Sun  , Mon  , Tue  , Wed , Thu  , Fru  ) ", 7 , 0 );

}

string read_day_of_wrrk( en_Day_of_Week day )
{
    switch (day)
    {
    case en_Day_of_Week::Sat:
        return " \nIts Saturday \n ";
     

    case en_Day_of_Week::Sun:
        
        return  " \nIts Sunday\n ";
    case en_Day_of_Week::Mon:
     
        return " \nIts monday \n ";
    case en_Day_of_Week::Tue:
       
        return " \nIts Tuesday \n ";
    case en_Day_of_Week::Wed:
        
        return" \nIts Wedneaday \n ";
    case en_Day_of_Week::Thu:
       
        return " \nIts Thursday \n ";
    case en_Day_of_Week::Fri:
    
        return " \nIts friday \n ";
    }


}

int main()
{
   

    cout << read_day_of_wrrk(Read_Day_of_week());


 }

 




