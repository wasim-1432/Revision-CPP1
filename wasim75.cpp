#include<iostream>
using namespace std;
int Merge_Two_Array_Of_Same_Size(int size,int arr1[],int arr2[]);
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int i,arr1[size],arr2[size];
    cout<<"Enter the element of first array"<<endl;
    for(i=0;i<=size-1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"\nEnter the element of second array"<<endl;
    for(i=0;i<=size-1;i++)
    {
        cin>>arr2[i];
    }
    Merge_Two_Array_Of_Same_Size(size,arr1,arr2);
    cout<<endl;
    return 0;
}
int Merge_Two_Array_Of_Same_Size(int size,int arr1[],int arr2[])
{
    int i,j=-1;
    int arr3[2*size];
    for(i=0,j++;i<=size-1;i++,j++)
    {
        arr3[j]=arr1[i];
    }
    for(i=0;i<=size-1;i++,j++)
    {
        arr3[j]=arr2[i];
    }
    for(j=0;j<=2*size-1;j++)
    {
        cout<<arr3[j]<<" ";
    }
}