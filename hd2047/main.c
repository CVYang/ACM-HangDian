#include <stdio.h>
#include <math.h>
__int64 sort(int x)
{
    int i=0;
    __int64 sum[100002];
    sum[1]=1;
    sum[2]=2;
    sum[3]=5;
    sum[4]=8;
    for(i=5;i<41;i++)
    {
        sum[i]=sum[i-1]+sum[i-2];
    }
    return sum[x];
}
int main()
{
    __int64 n=0;
    while(scanf("%I64d",&n)!=EOF)
    {
        __int64 s=0;
        s=pow(2,n);
        if(n==1)printf("3\n");
        else printf("%I64d\n",2*sort(n)+s);
    }
    return 0;
}
