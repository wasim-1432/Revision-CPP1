#include<iostream>
#include<string.h>
using namespace std;
class Date
{
    private:
        int d,m,y;         //Instance Member Variables
    public:
        void setData(int a,int b,int c)       //Instance Member Functions
        {
            d=a;
            m=b;
            y=c;
        }
        char *getMonthName()
        {
            switch(m)
            {
                case 1:
                    return "jan";
                    break;
                case 2:
                    return "Feb";
                    break;
                case 3:
                    return "March";
                    break;
                case 4:
                    return "April";
                    break;
                case 5:
                    return "May";
                    break;
                case 6:
                    return "June";
                    break;
                case 7:
                    return "July";
                    break;
                case 8:
                    return "Aug";
                    break;
                case 9:
                    return "Sep";
                    break;
                case 10:
                    return "Oct";
                    break;
                case 11:
                    return "Nov";
                    break;
                case 12:
                    return "Dec";
                    break;
            }
        }
        void showData()             //Instance Member Function
        {
            cout<<d<<"-"<<m<<"-"<<y<<endl;
            cout<<d<<"-"<<getMonthName()<<"-"<<y<<endl;
        }
};
int main()
{
    Date d1;
    d1.setData(31,12,2022);
    d1.showData();
    cout<<endl;
    return 0;
}