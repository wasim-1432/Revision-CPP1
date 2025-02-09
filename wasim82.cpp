#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,sec;       //Instance Member Variables
    public:
        void setData(int x,int y,int z)    //Instance Member Function
        {
            hour=x;
            min=y;
            sec=z;
        }
        void showData()
        {
            cout<<hour<<":"<<min<<":"<<sec<<endl;  //Instance Member Function
        }
};
int main()
{
    Time t1;
    t1.setData(03,45,20);
    t1.showData();
    cout<<endl;
    return 0;
}