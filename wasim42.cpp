#include<iostream>
using namespace std;
int Find_Highest_Digit_In_A_Given_Number(int a);
int main()
{
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    cout<<"Highest digit in a given number="<<Find_Highest_Digit_In_A_Given_Number(a);
    cout<<endl;
    return 0;
}
int Find_Highest_Digit_In_A_Given_Number(int a)
{
    int r;
    int b=a%10;
    a=a/10;
    while(a)
    {
        r=a%10;
        if(r>b)
        {
            b=r;
        }
        a=a/10;
    }
    return b;
}