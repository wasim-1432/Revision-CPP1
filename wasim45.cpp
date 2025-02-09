#include<iostream>
using namespace std;
int Check_Whether_A_Given_Number_Are_Present_In_Fibonacci_Series_Or_Not(int n);
int main()
{
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    Check_Whether_A_Given_Number_Are_Present_In_Fibonacci_Series_Or_Not(a);
    cout<<endl;
    return 0;
}
int Check_Whether_A_Given_Number_Are_Present_In_Fibonacci_Series_Or_Not(int n)
{
    int a=0,b=1,s=0;
    while(s<=n)
    {
        a=b;
        if(s==n)
        {
            cout<<"Present";
            break;
        }
        s=a+b;
        b=s;
    }
    if(s!=n)
    {
        cout<<"Not Present";
    }
}