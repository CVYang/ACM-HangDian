#include <iostream>

using namespace std;
///�������
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
                    cout<<"��"<<x<<" "<<"С��"<<y<<" "<<"����С�ļ�"<<z<<" "<<"�ܹ�����Ǯ"<<3*x+2*z+y/3<<endl;
                }
            }
            y+=3;
        }
    return 0;
}
