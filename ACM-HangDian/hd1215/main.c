#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n=0,a=0,j=0,c=0,sum=0;
    scanf("%d",&n);
   while(n--)
   {
     scanf("%d",&a);
     c=a;
     for(j=2;j<c;j++)
     {
        if(a%j==0)
        {
            if((a/j)!=j)
            {
              sum+=j+a/j;
              c=a/j;
            }
            else sum+=j;
        }
     }
     printf("%d\n",sum+1);
     sum=0;
   }
    return 0;
}
