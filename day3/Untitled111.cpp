
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"enter a year"<<endl;
    cin>>year;

    if(year%400==0)
    {
        cout<<"this is leap year"<<endl;

    }
    else if(year%100==0)
    {
      cout<<"this is not leap year"<<endl;

    }
    else if(year%4==0)
    {
        cout<<"this is not leap year"<<endl;
    }
    else

        cout<<"not leap year"<<endl;


      return 0;






}







