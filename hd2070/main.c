#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,i=0;
    __int64 f[52]={0};
    while(scanf("%d",&n)!=EOF&&n!=-1)
    {
        f[0]=0;
        f[1]=1;
        for(i=2;i<52;i++)
            f[i]=f[i-1]+f[i-2];
            printf("%I64d\n",f[n]);
    }
    return 0;
}
