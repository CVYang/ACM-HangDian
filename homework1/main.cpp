#include <iostream>

using namespace std;

int main()
{
    int i=1000,sum=0;
    while(i)
    {
        sum+=i;
        i--;
    }
    cout << sum << endl;
    return 0;
}
