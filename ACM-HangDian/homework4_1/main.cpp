#include <iostream>
#include <math.h>
#include <stdio.h>
#include <complex>
using namespace std;
///分小数，整数，负数  可能这个函数精度不够高,不能计算大数，可能不在实数范围内  考虑虚数
///
int main()
{
    int choose;
    while(1)
    {
    double a=0,sum=0,n=0;
    complex <double> com1,sum1;
    cout<<"please choose  the right number: 0 representative real number , 1 representative complex number"<<endl;
    cin>>choose;
    switch(choose)
    {
    case 1:
        {
            cout<<"please input number a,b,c example (a+bi)^c"<<endl;
            cin>>com1.real();
            cin>>com1.imag();
            cin>>n;
            sum1 = pow(com1,n);
            if(sum1.real()<0.000001)sum1.real()=0;
            if(sum1.imag()<0.000001)sum1.imag()=0;
            cout << sum1.real()<<"+"<<sum1.imag()<<"i"<<endl;
        }break;
    case 0:
        {
            cout<<"please input number a and b example a^b  2^3"<<endl;
            cin>>a>>n;
            if(a<0&&(n-(int)n>0))
              {
                com1.real()=a;
                com1.imag()=0;
                sum1 = pow(com1,n);
                if(sum1.real()<0.000001)sum1.real()=0;
                if(sum1.imag()<0.000001)sum1.imag()=0;
                cout << sum1.real()<<"+"<<sum1.imag()<<"i"<<endl;
              }
            else
            {
                sum = pow(a,n);
                cout << sum << endl;
            }
        }break;
        default: break;
    }
    }
    return 0;
}
