#include<iostream>
using namespace std;
int Print_Prime_Numbers_Between_Given_Two_Numbers(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter the starting and ending point"<<endl;
    cin>>a>>b;
    Print_Prime_Numbers_Between_Given_Two_Numbers(a,b);
    cout<<endl;
    return 0;
}
int Print_Prime_Numbers_Between_Given_Two_Numbers(int a,int b)
{
    int i,n;
    for(n=a;n<=b;n++)
    {
        i=2;
        while(i<=n)
        {
            if(n%i==0)
            {
                break;
            }
            i++;
        }
        if(n==i)
        {
            cout<<n<<" ";
        }
    }
}