#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,i=0,j=0;
    int num[21];
    num[1]=1;
    num[2]=2;
    num[3]=3;
    for(i=4;i<20;i++)
    {
        num[i]=num[i-1]+num[i-2];
    }
    while(scanf("%d",&n)!=EOF)
    {
        while(n--)
        {
            scanf("%d",&j);
            printf("%d\n",num[j]);
        }
    }

    return 0;
}
