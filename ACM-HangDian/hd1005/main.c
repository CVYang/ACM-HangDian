#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 a=0,b=0,n=0,f[50]={0};
    while(scanf("%I64d %I64d %I64d",&a,&b,&n)!=EOF&&(a!=0||b!=0||n!=0))///不全为零
    {
        f[1]=1;
        f[2]=1;
        int i=0;
        for(i=3;i<50;i++)
            f[i]=(a*f[i-1]+b*f[i-2])%7;
            n=n%48;
        printf("%I64d\n",f[n]);///周期性 周期为48
    }
    return 0;
}
