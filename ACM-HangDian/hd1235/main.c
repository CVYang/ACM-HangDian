#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[1000]={0};
    int n=0;
    int i=0;
    int dis=0;
    int count=0;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
        scanf("%d",&dis);
        for(i=0;i<n;i++)
        {
            if(dis==num[i])count++;
            num[i]=0;
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
