#include <iostream>
using namespace std;
class arr
{
public:
    int inputa()
    {
        int x=0;
        cin>>x;
        return x;
    }
    void counta(int array[20], int x)
    {
        int i=0,counter=0;
        for(i=0;i<20;i++)
        {
            if(x==array[i])counter++;
        }
        cout<<counter<<endl;
    }
};
int main()
{
    arr test;
    int num[20],i=20,x=0;
    cout<<"请输入20个数"<<endl;
    while(i)
    {
        num[20-i]=test.inputa();
        i--;
    }
    cout<<"请输入整数x"<<endl;
    cin>>x;
    test.counta(num,x);
    return 0;
}
