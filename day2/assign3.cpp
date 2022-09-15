#include<iostream>
using namespace std;

int main()

{
    float km,meter,feets,inches,centimeter;

    cout<<"distance between cities in "<<endl;
    cin>>km;

    //km to meters
    meter=km*1000;
    cout<<"distance in meter is = "<<meter<<endl;

    //km to feets
    feets=km*3280.839;
     cout<<"distance in feets is = "<<feets<<endl;

    //km to inches
    inches=km*39370.0787;
    cout<<"distance in inches is = "<<inches<<endl;


    //km to centimeters
    centimeter=meter*1000;
    cout<<"distance in centimeter is = "<<centimeter<<endl;


    return 0;


}
