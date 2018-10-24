#include <iostream>

using namespace std;
///暴力打表
int main()
{
    int x=0, y=0 ,z=0;
    for(x=0;x<=34;x++)
        for(y=0;y<=99;)
        {
            for(z=0;z<=50;z++)
            {
                if(x+y+z==100&&3*x+2*z+y/3==100)
                {
                    cout<<"大鸡"<<x<<" "<<"小鸡"<<y<<" "<<"不大不小的鸡"<<z<<" "<<"总共花的钱"<<3*x+2*z+y/3<<endl;
                }
            }
            y+=3;
        }
    return 0;
}
