#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,m=0,n=0,temp=0,flag=1;
    int a[20002]={0},b=0;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<n;j++)
        {
            scanf("%d",&b);
            for(i=0;i<m;i++)
            {
                if(b==a[i])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                a[m]=b;
                m++;
            }
            flag=1;
        }
        for(i=0;i<m;i++)
        {
            for(j=i;j<m;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        printf("%d",a[0]);
        a[0]=0;
        for(i=1;i<m;i++)
        {
            printf(" %d",a[i]);
            a[i]=0;
        }
        printf("\n");
    }
    return 0;
}
