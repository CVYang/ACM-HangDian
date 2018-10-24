#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,sum=0,n=0,i=0;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
