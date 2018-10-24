#include <stdio.h>
int sum=3;
int calculate(int n);
int main()
{
    int n=0,total=0,m=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        total=calculate(m);
        sum=3;
        printf("%d\n",total);
    }

    return 0;
}
int calculate(int n)
{
    n--;
    sum=(sum-1)*2;
    if(n==0)return sum;
    else calculate(n);
}
/******************************************

µÝ¹é  ³ö¿ÚÎª=0

*******************************************/
