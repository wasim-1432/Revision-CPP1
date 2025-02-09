#include<iostream>
#include<math.h>
using namespace std;
float Calculate_Area_Using_Function_Overloading(int r);
int Calculate_Area_Using_Function_Overloading(int l,int w);
float Calculate_Area_Using_Function_Overloading(int a,int b,int c);
int main()
{
    int r;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>r;
    cout<<"Area of circle is="<<Calculate_Area_Using_Function_Overloading(r)<<endl;
    int l,w;
    cout<<"Enter the length and width of the rectangle"<<endl;
    cin>>l>>w;
    cout<<"Area of rectangle is="<<Calculate_Area_Using_Function_Overloading(l,w)<<endl;
    int a,b,c;
    cout<<"Enter the value of a,b and c"<<endl;
    cin>>a>>b>>c;
    cout<<"Area of triangle is="<<Calculate_Area_Using_Function_Overloading(a,b,c)<<endl;
    cout<<endl;
    return 0;
}
float Calculate_Area_Using_Function_Overloading(int r)
{
    return 3.14*r*r;
}
int Calculate_Area_Using_Function_Overloading(int l,int w)
{
    return l*w;
}
float Calculate_Area_Using_Function_Overloading(int a,int b,int c)
{
    float s,ar;
    s=(a+b+c)/2.0;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}