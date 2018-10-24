#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n=0,f[100002];
    f[0]=7;
    f[1]=11;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=2;i<=100;i++)
            f[i]=f[i-1]+f[i-2];
        if((n-2)%4==0)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
