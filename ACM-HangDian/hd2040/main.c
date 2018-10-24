#include <stdio.h>
int main()
{
    int m=0;
    long int a=0,b=0,i=0,sum1=0,sum2=0;
    scanf("%d",&m);
    while(m--)
    {
        scanf("%ld %ld",&a,&b);
        for(i=1;i<a;i++)
            if(a%i==0)sum1+=i;
        for(i=1;i<b;i++)
            if(b%i==0)sum2+=i;
        if(sum1==b&&sum2==a)printf("YES\n");
        else printf("NO\n");
        printf("%ld %ld \n",sum1,sum2);
        sum1=0;
        sum2=0;
    }
    return 0;
}
/****************************************
循环次数可以缩减到（a+b）/2次
*****************************************/
