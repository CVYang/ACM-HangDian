#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n=0;
    __int64 sum=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
            sum+=i;
            printf("%I64d\n\n",sum);
            sum=0;
    }
    return 0;
}
