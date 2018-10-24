#include <iostream>
#include <math.h>
#include <complex>
using namespace std;

class complex
{
 public:
 complex (double x=0 , double y=0)
{
  real = x;
  imag = y;
}
 private :
    double real;
    double imag;
};

int main()
{
    double x,y;
    cin>>x>>y;
    complex obj1;

    return 0;
}
