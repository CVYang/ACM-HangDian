#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 a=0,b=0;
    int n=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%I64d %I64d",&a,&b);
        printf("%I64d\n",a+b);
    }
    return 0;
}
