#include<iostream>
#include<string.h>
using namespace std;
char *Sort_String_In_Ascending_Order_Or_Descending_Order_Using_Bool_Type_Argument(char str[],bool=0);
int main()
{
    char str[30];
    cout<<"Enter any string"<<endl;
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int x;
    /*cout<<"Enter the 1/0(1 for ascending & 0 for descending)"<<endl;
    cin>>x;*/
    Sort_String_In_Ascending_Order_Or_Descending_Order_Using_Bool_Type_Argument(str,x);
    cout<<endl;
    return 0;
}
char *Sort_String_In_Ascending_Order_Or_Descending_Order_Using_Bool_Type_Argument(char str[],bool x)
{
    if(x==1)
    {
        int round,i,l;
        l=strlen(str);
        for(round=1;round<=l-1;round++)
        {
            for(i=0;i<=l-round-1;i++)
            {
                if(str[i]>=str[i+1])
                {
                    char temp;
                    temp=str[i];
                    str[i]=str[i+1];
                    str[i+1]=temp;
                }
            }
        }
        for(i=0;str[i];i++)
        {
            cout<<str[i];
        }
    }
    else if(x==0)
    {
        int round,i,l;
        l=strlen(str);
        for(round=0;round<=l-2;round++)
        {
            for(i=0;i<=l-round-1;i++)
            {
                if(str[i]<=str[i+1])
                {
                    char temp;
                    temp=str[i];
                    str[i]=str[i+1];
                    str[i+1]=temp;
                }
            }
        }
        for(i=0;str[i];i++)
        {
            cout<<str[i];
        }
    }
}