#include<iostream>
using namespace std;
int Add_Two_Numbers_Having_Different_Data_Types_Using_Function_Overloading(int a,int b);
float Add_Two_Numbers_Having_Different_Data_Types_Using_Function_Overloading(int a,float b);
float Add_Two_Numbers_Having_Different_Data_Types_Using_Function_Overloading(float a,int b);
float Add_Two_Numbers_Having_Different_Data_Types_Using_Function_Overloading(float a,float b);
int main()
{
    float c,d;
    cout<<"Enter any two numbers"<<endl;
    cin>>c>>d;
    cout<<"Sum is="<<Add_Two_Numbers_Having_Different_Data_Types_Using_Function_Overloading(c,d)<<endl;
    cout<<endl;
    return 0;
}
int Add_Two_Numbers_Having_Different_Data_Types_Using_Function_Overloading(int a,int b)
{
    return a+b;
}
float Add_Two_Numbers_Having_Different_Data_Types_Using_Function_Overloading(int a,float b)
{
    return a+b;
}
float Add_Two_Numbers_Having_Different_Data_Types_Using_Function_Overloading(float a,int b)
{
    return a+b;
}
float Add_Two_Numbers_Having_Different_Data_Types_Using_Function_Overloading(float a,float b)
{
    return a+b;
}