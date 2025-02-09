#include<iostream>
using namespace std;
int Swap_Data_Of_Two_Int_Variables(int &x,int &y);
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    Swap_Data_Of_Two_Int_Variables(a,b);
    cout<<endl;
    return 0;
}
int Swap_Data_Of_Two_Int_Variables(int &x,int &y)
{
    int c;
    c=x;
    x=y;
    y=c;
    cout<<"A="<<x<<" B="<<y<<endl;
}