#include <stdio.h>
#include<math.h>
int main()
{
   __int64 n=0,i=0,a[100]={0};
    while(scanf("%I64d",&n)!=EOF)
    {
        a[1]=3;
        a[2]=6;
        a[3]=6;
        for(i=4;i<=n;i++)
            a[i]=a[i-1]+2*a[i-2];
    if(n==1)printf("3\n");
    else if(n==2)printf("6\n");
    else if(n==3)printf("6\n");
    else
     printf("%I64d\n",a[n]);
    }
    return 0;
}
