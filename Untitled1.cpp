#include<iostream>
using namespace std;

int main(){
int a , n;

cout<<"enter the number"<<" ";
cin>>a;
int reverse=0;
while(a!=0)
{
    n = a%10;
    reverse=reverse*10+n;
    a=a/10;
}
     cout<<"Reversed Number: "<<reverse<<endl;


    return 0;

}








