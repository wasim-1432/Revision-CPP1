#include<iostream>
using namespace std;
int Calculate_Volume_Using_Function_Overloading(int l,int w,int h);
float Calculate_Volume_Using_Function_Overloading(int r,int h);
float Calculate_Volume_Using_Function_Overloading(int r);
int main()
{
    int l,w,h;
    cout<<"Enter the length,width and height of the cuboid"<<endl;
    cin>>l>>w>>h;
    cout<<"Volume of cuboid is="<<Calculate_Volume_Using_Function_Overloading(l,w,h)<<endl;
    int r;
    cout<<"Enter the radius and height of the cone"<<endl;
    cin>>r>>h;
    cout<<"Volume of cone="<<Calculate_Volume_Using_Function_Overloading(r,h)<<endl;
    cout<<"Enter the radius of the sphare"<<endl;
    cin>>r;
    cout<<"Volume of Sphare="<<Calculate_Volume_Using_Function_Overloading(r);
    cout<<endl;
    return 0;
}
int Calculate_Volume_Using_Function_Overloading(int l,int w,int h)
{
    return l*w*h;
}
float Calculate_Volume_Using_Function_Overloading(int r,int h)
{
    return 3.14*r*r*h;
}
float Calculate_Volume_Using_Function_Overloading(int r)
{
    return 4/3.0*3.14*r*r*r;
}