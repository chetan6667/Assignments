#include<iostream>
using namespace std;

int main()
{
    int a1,a2,a3;
    cout<<"enter the age of ram,shyam,ajay"<<endl;
    cin>>a1;
    cin>>a2;
    cin>>a3;

    if(a1<=a2&&a1<=a3)
    {
        cout<<"ram is younger"<<endl;
    }

    if(a2<=a3&&a2<=a1)
    {
        cout<<"shyam is younger"<<endl;
    }
    if(a3<=a2&&a3<=a1)
    {
        cout<<"ajay is younger"<<endl;
    }

    return 0;
}
