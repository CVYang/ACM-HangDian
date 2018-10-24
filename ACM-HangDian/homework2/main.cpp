#include <iostream>
using namespace std;
void inputa(int *p)
{
    int x[20],i=20;
    while(i)
    {
        cin>>x[20-i];
        *p++=x[20-i];
        i--;
    }
}

int counta(int arr[20])
{
    int i=0,n=0,x=0;
    cin>>x;
    for(i=0;i<20;i++)
    {
        if(x==arr[i])n++;
    }
    return n;
}

int main()
{
    int num[20];
    inputa(num);
    cout << counta(num) << endl;
    return 0;
}
