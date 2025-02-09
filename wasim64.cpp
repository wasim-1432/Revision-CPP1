#include<iostream>
using namespace std;
int Calculate_Prime_Factor_Of_A_Given_Number(int n);
int main()
{
    int x;
    cout<<"Enter any number"<<endl;
    cin>>x;
    Calculate_Prime_Factor_Of_A_Given_Number(x);
    cout<<endl;
    return 0;
}
int Calculate_Prime_Factor_Of_A_Given_Number(int n)
{
    int i=2,arr[20];
    while(n!=1)
    {
        if(n%i==0)
        {
            n=n/i;
            cout<<i<<" ";
            if(n%i==0)
            {
                n=n/i;
                continue;
            }
        }
        i++;
    }
}