#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,sum=0,n=0,m=0,i=0,j=0;
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&m);
            for(j=0;j<m;j++)
            {
                scanf("%d",&a);
                sum+=a;
            }
            printf("%d\n",sum);
        sum=0;
        }

    return 0;
}
