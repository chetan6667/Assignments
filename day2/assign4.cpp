#include<iostream>
using namespace std;

int main()

{
   int length,breadth,radius,area,perimeter,area_of_circle,circumference_of_circle;

   cout<<"length of rectangle is "<<endl;
   cin>>length;

   cout<<"breadth of rectangle is "<<endl;
   cin>>breadth;

    cout<<"radius of circle is "<<endl;
   cin>>radius;


   //area of rectangle
    area= length*breadth;
   cout<<"area is = "<<area<<endl;

   //perimeter of rectangle

   perimeter=2*(length+breadth);
   cout<<"perimeter  is = "<<perimeter<<endl;

   //area of a circle
  area_of_circle=(3.14*(radius*radius));
   cout<<"area of circle of circle is = "<<area_of_circle<<endl;

   //circumference of a circle
   circumference_of_circle=(2*3.14*radius);
   cout<<"circumference of circle  is = "<<circumference_of_circle<<endl;

   return 0;



}
