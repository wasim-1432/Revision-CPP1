#include<iostream>
using namespace std;
int main()
{
    int arr[10],sum=0;
    cout<<"Enter 10 number of the array"<<endl;
    for(int i=0;i<=9;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=9;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum is="<<sum;
    cout<<endl;
    return 0;
}