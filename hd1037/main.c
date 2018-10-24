#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,b=0,c=0;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a<168||b<168||c<168)printf("CRASH");
        if(a<168)printf(" %d",a);
        else if(b<168)printf(" %d",b);
        else if(c<168)printf(" %d",c);
        printf("\n");
    }
    return 0;
}
