#include <stdio.h>
#include <math.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    while(n--)
    {
        __int64 i=0,m=0;
        double count=0;
        scanf("%I64d",&m);
        for(i=2;i<=m;i++)
            count+=log10(i);

        printf("%d\n",((int)count+1));
    }
    return 0;
}
