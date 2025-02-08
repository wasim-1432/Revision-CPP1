#include<iostream>
using namespace std;
int main()
{
    int a,b,i=2,s=1;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
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
    cout<<"LCM is="<<s<<endl;
    cout<<endl;
    return 0;
}