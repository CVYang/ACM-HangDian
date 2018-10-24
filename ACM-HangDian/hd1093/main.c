#include <stdio.h>
#include <stdlib.h>
int main()
{
    __int64 a=0,sum=0;
    int n=0;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        while(n--)
        {
            int m=0;
            scanf("%d",&m);
            while(m--)
            {
                scanf("%I64d",&a);
                sum+=a;
            }
            printf("%I64d\n",sum);
            sum=0;
        }

    }
    return 0;
}
