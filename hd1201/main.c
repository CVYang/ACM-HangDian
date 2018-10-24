#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year=0,month=0,day=0,i=0,j=0,n=0,sum=6570;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d-%d-%d",&year,&month,&day);
        if(month>2)
        {
          for(j=year+1;j<=year+18;j++)
            {
                if((j%4==0&&j%100!=0)||(j%400==0&&j%100==0))sum+=1;
            }
        }
        else
            for(j=year;j<year+18;j++)
            {
                if((j%4==0&&j%100!=0)||(j%400==0&&j%100==0))sum+=1;
            }
        if(((year%4==0&&year%100!=0)||(year%400==0&&year%100==0))&&month==2&&day==29)
            printf("-1\n");
        else
        printf("%d\n",sum);
        sum=6570;
    }
    return 0;
}
