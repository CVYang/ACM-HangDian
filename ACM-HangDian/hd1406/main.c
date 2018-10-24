#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,n=0,i=0,j=0,sum=0,count=0;
    while(scanf("%d",&n)!=EOF)
    {
        while(n--)
        {
            scanf("%d %d",&a,&b);
            if(a>b)
            {
                a=a+b;
                b=a-b;
                a=a-b;
            }
            for(i=a;i<=b;i++)
            {
                for(j=2;j<i;j++)
                {
                    if(i%j==0)sum+=j;
                }
                sum++;
                if(sum==i)
                {
                    count++;
                }
                sum=0;
            }
            printf("%d\n",count);
            count=0;

        }
    }
    return 0;
}
