#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 a=0,b=0;
    while(scanf("%I64d %I64d",&a,&b)!=EOF)
    {
        printf("%I64d\n\n",a+b);
    }
    return 0;
}
