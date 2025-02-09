#include<iostream>
using namespace std;
int Find_Maximum_Number_Of_Given_Two_Int_Or_Real_Numbers_Using_Function_Overloading(int a,int b);
double Find_Maximum_Number_Of_Given_Two_Int_Or_Real_Numbers_Using_Function_Overloading(double a,double b);
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    cout<<"Max is="<<Find_Maximum_Number_Of_Given_Two_Int_Or_Real_Numbers_Using_Function_Overloading(a,b)<<endl;
    double x,y;
    cout<<"Enter any two numbers"<<endl;
    cin>>x>>y;
    cout<<"Max is="<<Find_Maximum_Number_Of_Given_Two_Int_Or_Real_Numbers_Using_Function_Overloading(x,y)<<endl;
    cout<<endl;
    return 0;
}
int Find_Maximum_Number_Of_Given_Two_Int_Or_Real_Numbers_Using_Function_Overloading(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else if(b>a)
    {
        return b;
    }
}
double Find_Maximum_Number_Of_Given_Two_Int_Or_Real_Numbers_Using_Function_Overloading(double a,double b)
{
    if(a>b)
    {
        return a;
    }
    else if(b>a)
    {
        return b;
    }
}