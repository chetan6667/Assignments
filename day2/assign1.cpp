#include<iostream>
using namespace std;

int main()
{
    int bs;
    float hr,da,gs;

    cout<<"enter the basic salary"<<endl;
    cin>>bs;

    //hr calculations
    hr= (bs*40)/100;
    cout<<"hr is = "<<hr<<endl;


    //da calculations
    da=(bs*20)/100;
     cout<<"da is = "<<da<<endl;

    //gs calculations
    gs=bs+hr+da;

    cout<<"gross salary is = "<<gs;

    return 0;
}

