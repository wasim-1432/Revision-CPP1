#include<iostream>
using namespace std;
int Sort_An_Array_For_Ascending_And_Descending_Order_Using_Bool_Type_Argument(int size,int arr[],bool=0);
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size],i;
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<=size-1;i++)
    {
        cin>>arr[i];
    }
    int x;
    /*cout<<"Enter the 1/0(1 foe ascending order & 0 for descending order)"<<endl;
    cin>>x;*/
    Sort_An_Array_For_Ascending_And_Descending_Order_Using_Bool_Type_Argument(size,arr,x);
    cout<<endl;
    return 0;
}
int Sort_An_Array_For_Ascending_And_Descending_Order_Using_Bool_Type_Argument(int size,int arr[],bool x)
{
    if(x==1)
    {
        int round,i;
        for(round=0;round<=size-2;round++)
        {
            for(i=0;i<=size-round-1;i++)
            {
                if(arr[i]>=arr[i+1])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
        for(i=0;i<=size-1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else if(x==0)
    {
        int round,i;
        for(round=1;round<=size-1;round++)
        {
            for(i=0;i<=size-round-1;i++)
            {
                if(arr[i]<=arr[i+1])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
        for(i=0;i<=size-1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}