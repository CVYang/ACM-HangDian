#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 num[10000]={0},n,i=0;
    while(scanf("%I64d",&n)!=EOF)
    {
        num[1]=1;
        num[2]=1;
        num[3]=3;
        for(i=4;i<100;i++)
            num[i]=num[i-1]+2*num[i-2];
        printf("%I64d\n",num[n-1]);
    }
    return 0;
}
