#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    __int64 n=0,sum=1;
    while(scanf("%I64d",&n)!=EOF)
    {
        while(n!=1)
        {
             sum*=n;
             n--;
        }
        printf("%I64d\n",sum);
        sum=1;
    }
    return 0;
}
