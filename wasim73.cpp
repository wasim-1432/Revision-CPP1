#include<iostream>
#include<string.h>
using namespace std;
char *Print_Sub_String_between_Given_Two_Define_Indices(char str[],int startindex,int='\0');
int main()
{
    char str[30];
    cout<<"Enter any string"<<endl;
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int startindex,endindex;
    cout<<"Enter the starting indices"<<endl;
    cin>>startindex;
    cout<<"Enter the ending indices"<<endl;
    cin>>endindex;
    Print_Sub_String_between_Given_Two_Define_Indices(str,startindex,endindex);
    cout<<endl;
    return 0;
}
char *Print_Sub_String_between_Given_Two_Define_Indices(char str[],int startindex,int endindex)
{
    int i;
    for(i=startindex;i<=endindex;i++)
    {
        cout<<str[i];
        if(str[i]=='\0')
        {
            break;
        }
    }
}