#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<"Maximum number is="<<a;
    }
    else if(b>a)
    {
        cout<<"MAximum number is="<<b;
    }
    cout<<endl;
    return 0;
}