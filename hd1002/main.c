#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,t=0;
    scanf("%d",&n);
    t=n;
    while(n--)
    {
        __int64 a=0,b=0,sum=0;
        scanf("%I64d %I64d",&a,&b);
        sum=a+b;
        if(t-n==1)
        {
            printf("Case %d:\n",t-n);
            printf("%I64d + %I64d = %I64d\n",a,b,sum);
        }
        else
        {
            printf("\nCase %d:\n",t-n);
            printf("%I64d + %I64d = %I64d\n",a,b,sum);
        }

    }
    return 0;
}
