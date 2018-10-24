#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 num[1005]={0};
    int i=0,n=0,j;
    num[1]=1;
    num[2]=1;
    for(i=3;i<1005;i++)
    {
        num[i]=num[i-1]+num[i-2];
    }
    while(scanf("%d",&n)!=EOF)
    {
        while(n--)
        {
            scanf("%d",&j);
            printf("%I64d\n",num[j]);
        }
    }
    return 0;
}
