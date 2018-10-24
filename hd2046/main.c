#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 n=0,i=0,sum[100002];
    while(scanf("%I64d",&n)!=EOF)
    {
        sum[1]=1;
        sum[2]=2;
        sum[3]=3;
        for(i=4;i<51;i++)
        {
            sum[i]=sum[i-2]+sum[i-1];
        }
        printf("%I64d\n",sum[n]);
    }

    return 0;
}
