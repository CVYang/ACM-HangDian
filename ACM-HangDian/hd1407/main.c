#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,j=0,k=0;
    int num=0;
    while(scanf("%d",&num)!=EOF)
    {
        for(i=1;i<=100;i++)
        {
            for(j=i;j<=100;j++)
            {
                for(k=j;k<=100;k++)
                {
                 if((i*i+j*j+k*k)==num)
                 {
                     printf("%d %d %d\n",i,j,k);
                     goto state;
                 }
                }
            }
        }
state:  ;
    }
    return 0;
}

