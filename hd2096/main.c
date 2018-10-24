#include <stdio.h>
int main()
{
    int T=0;
    scanf("%d",&T);
    while(T--)
    {
        int a,b;
        long int res=0;
        scanf("%d%d",&a,&b);
        res=a%100+b%100;
        printf("%ld\n",res%100);
    }
    return 0;
}
/***********************************************************************
#include <stdio.h>
int main()
{
    long int T=0,i=0,res=0;
    long int t1=0,t2=0,t3=0,t4=0,t5=0,t6=0;
    long int num[][2]={{0,0}};
    scanf("%ld",&T);
    while(T--)
    {
            scanf("%ld %ld",&num[i][0],&num[i][1]);
            if(num[i][0]>=100)
            {
                 t1=num[i][0]%10;
                num[i][0]/=10;
                t2=num[i][0]%10;
                num[i][0]=t2*10+t1;
            }
            if(num[i][1]>=100)
            {
                 t3=num[i][1]%10;
                num[i][1]/=10;
                t4=num[i][1]%10;
                num[i][1]=t4*10+t3;
            }
            res=num[i][0]+num[i][1];
            if(res>=100)
            {
                t5=res%10;
                res/=10;
                t6=res%10;
                res=t6*10+t5;
            }
           // if(T>=1)
                printf("%ld\n",res);
            //else printf("%ld",res);
    }
    return 0;
}

*******************************************************************************/
