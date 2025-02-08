#include<iostream>
using namespace std;
int Calcualate_Power_Of_X_Raised_To_The_Power_Of_Y(int x,int y);
int main()
{
    int x,y;
    cout<<"Enter a number"<<endl;
    cin>>x;
    cout<<"Enter the power value"<<endl;
    cin>>y;
    cout<<"Required Answer is="<<Calcualate_Power_Of_X_Raised_To_The_Power_Of_Y(x,y);
    cout<<endl;
    return 0;
}
int Calcualate_Power_Of_X_Raised_To_The_Power_Of_Y(int x,int y)
{
    int s=1;
    while(y)
    {
        s=s*x;
        y--;
    }
    return s;
}