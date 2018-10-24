#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    while(n--)
    {

   __int64 a=0,b=0;
        scanf("%I64d%I64d",&a,&b);
        if((a%b)==0)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
