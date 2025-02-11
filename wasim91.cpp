#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        void setData(int a=0,int b=0)
        {
            real=a;
            imaginary=b;
        }
        void showData()
        {
            if(imaginary>0)
            {
                cout<<real<<"+"<<imaginary<<"i"<<endl;
            }
            else
            {
                cout<<real<<imaginary<<"i"<<endl;
            }
        }
        Complex Add(Complex C)
        {
            Complex temp;
            temp.real=real+C.real;
            temp.imaginary=imaginary+C.imaginary;
            return temp;
        }
        Complex Subtract(Complex C)
        {
            Complex temp;
            temp.real=real-C.real;
            temp.imaginary=imaginary-C.imaginary;
            return temp;
        }
        Complex Multiply(Complex C)
        {
            Complex temp;
            temp.real=real*C.real-imaginary*C.imaginary;
            temp.imaginary=real*C.imaginary+imaginary*C.real;
            return temp;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(3,4);
    c3=c1.Multiply(c2);
    c3.showData();
    cout<<endl;
    return 0;
}