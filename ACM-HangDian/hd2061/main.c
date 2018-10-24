#include <stdio.h>
#include <string.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    while(n--)
    {
        long int k=0,i=0,flag=0;
        double credits={0},sum=0,avr=0,s=0,score;
        char name[35];
        scanf("%ld",&k);
        getchar();
        for(i=0;i<k;i++)
        {
            scanf("%s %lf %lf",name,&credits,&score);
            if(flag==0)
            {
                if(score<60)
                {
                    flag=1;
                }
                else
                {
                    sum+=(credits*score);
                    s+=credits;
                }
            }
        }
        avr=sum/s;
         if(flag==0)printf("%.2lf\n",avr);
         else printf("Sorry!\n");
         if(n)printf("\n");
    }
    return 0;
}
