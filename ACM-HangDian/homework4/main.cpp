#include <iostream>
using namespace std;
class AA
{
private :
    int x,y;
public:
    int input1(int m, int n)
    {
       this->x= m;
       this->y= n;
       return m*n;
    }
};

class BB
{
private :
    int a,b,c;
public :
    int input2(int x, int y, int z)
    {
        this->a = x;
        this->b = y;
        this->c = z;
        return x+y+z;
    }
};

int compare(int x, int y)
{
    if(x==y)return 0;
    return x>y?1:-1;
}

int main()
{
    AA p1;
    BB p2;
    int sum1,sum2;
    int a,b,c,x,y;
    cout<<"杨方健 41452041"<<endl;
    cout<<"输入AA的对象x,y"<<endl;
    cin>>x>>y;
    cout<<"输入BB的对象a,b,c"<<endl;
    cin>>a>>b>>c;
    sum1=p1.input1(x,y);
    sum2=p2.input2(a,b,c);
    cout<<compare(sum1,sum2)<<endl;
    return 0;
}
