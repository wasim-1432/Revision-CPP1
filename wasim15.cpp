#include<iostream>
using namespace std;
int Claculate_LCM_Of_Given_Two_Numbers(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    cout<<"LCM is="<<Claculate_LCM_Of_Given_Two_Numbers(a,b);
    cout<<endl;
    return 0;
}
int Claculate_LCM_Of_Given_Two_Numbers(int a,int b)
{
    int i=2,s=1;
    while(a!=1 || b!=1)
    {
        if(a%i==0 && b%i==0)
        {
            a=a/i;
            b=b/i;
            s=s*i;
            continue;
        }
        else if(a%i==0)
        {
            a=a/i;
            s=s*i;
            continue;
        }
        else if(b%i==0)
        {
            b=b/i;
            s=s*i;
            continue;
        }
        i++;
    }
    return s;
}