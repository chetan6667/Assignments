#include<iostream>
using namespace std;

int main()
{
    float sub1,sub2,sub3,sub4 ,sub5;
float aggregate,percentage;

cout<<"marks obtained in sub1 is = "<<endl;
cin>>sub1;

cout<<"marks obtained in sub2 is = "<<endl;
cin>>sub2;

cout<<"marks obtained in sub3 is = "<<endl;
cin>>sub3;

cout<<"marks obtained in sub4 is = "<<endl;
cin>>sub4;

cout<<"marks obtained in sub5 is = "<<endl;
cin>>sub5;

//aggregate calculation
 aggregate=(sub1+sub2+sub3+sub4+sub5)/5;
 cout<<"aggregate is = "<<aggregate<<endl;

 //percentage calculation
 percentage=((sub1+sub2+sub3+sub4+sub5)*100)/500;
 cout<<"percentage is ="<<percentage<<endl;


 return 0;
}
