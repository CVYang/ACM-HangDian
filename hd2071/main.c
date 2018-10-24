#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t=0,n=0,i=0;
    double height=0,max=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lf",&height);
            if(height>max)max=height;
        }
        printf("%.2lf\n",max);
        max=0;
    }
    return 0;
}
