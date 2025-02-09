#include<iostream>
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
        void showData()             //Instance Member Function
        {
            cout<<d<<"-"<<m<<"-"<<y<<endl;
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