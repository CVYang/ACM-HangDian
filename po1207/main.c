#include <stdio.h>
#include <stdlib.h>
static int max =0,counter=0;
int main()
{
    int m=0,n=0,i=0,j=0,high,low;
   while(scanf("%d %d",&n,&m)!=EOF)
   {
       high=m;
       low=n;
       high=m>n?m:n;
       low=m>n?n:m;

    for(i=low;i<=high;i++)
    {
        j=i;
        counter=0;
        while(j!=1)
        {
            if (j%2==0)j/=2;
            else j=j*3+1;
               counter++;
        }
        if(counter>max)max=counter;
    }
     printf("%d %d %d\n",n,m,max+1);
     max=0;
   }
    return 0;
}
