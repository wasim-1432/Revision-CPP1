#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;       //Instance Member Varibale
    public:
        void setData(int x,int y)    //Instance Member Function
        {
            real=x;
            imaginary=y;
        }
        void showData()            //Instance Member Function
        {
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
};
int main()
{
    Complex c1;
    c1.setData(2,3);
    c1.showData();
    cout<<endl;
    return 0;
}