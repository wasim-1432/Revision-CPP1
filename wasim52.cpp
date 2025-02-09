#include<iostream>
using namespace std;
int Add_Two_Or_Three_Numbers_Using_Default_Argument(int,int,int=0);
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    cout<<"Sum of two numbers is="<<Add_Two_Or_Three_Numbers_Using_Default_Argument(a,b)<<endl;
    int c;
    cout<<"Enter ant three numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"Sum of three numbers is="<<Add_Two_Or_Three_Numbers_Using_Default_Argument(a,b,c)<<endl;
    cout<<endl;
    return 0;
}
int Add_Two_Or_Three_Numbers_Using_Default_Argument(int x,int y,int z)
{
    return x+y+z;
}