#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,n=0;
    int num[1002]={0};
    scanf("%d",&n);
    while(n--)
    {
        int m=0;
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%d",&num[i]);
        for(i=0;i<m;i++)
            for(j=i;j<m;j++)//j=i 就是升序 j=0就是降序  为啥?
        {
            if(num[i]>num[j])
            {
                num[i]=num[i]+num[j];
                num[j]=num[i]-num[j];
                num[i]=num[i]-num[j];
            }
        }
        for(i=0;i<m;i++)
        {
            if(i==0)printf("%d",num[i]);
            else printf(" %d",num[i]);
        }
        printf("\n");
    }
    return 0;
}
