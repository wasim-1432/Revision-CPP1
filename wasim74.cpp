#include<iostream>
using namespace std;
int Swap_Two_Array_Using_Third_Array(int size,int arr1[],int arr2[]);
int main()
{
    int size;
    cout<<"Enter the array size"<<endl;
    cin>>size;
    int arr1[size],arr2[size],i;
    cout<<"Enter the first array elemnt"<<endl;
    for(i=0;i<=size-1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the second array element"<<endl;
    for(i=0;i<=size-1;i++)
    {
        cin>>arr2[i];
    }
    Swap_Two_Array_Using_Third_Array(size,arr1,arr2);
    cout<<endl;
    return 0;
}
int Swap_Two_Array_Using_Third_Array(int size,int arr1[],int arr2[])
{
    int arr3[size],i;
    for(i=0;i<=size-1;i++)
    {
        arr3[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=arr3[i];
    }
    cout<<"After Swapping First Array"<<endl;
    for(i=0;i<=size-1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<"\nAfter Swapping Second Array"<<endl;
    for(i=0;i<=size-1;i++)
    {
        cout<<arr2[i]<<" ";
    }
}