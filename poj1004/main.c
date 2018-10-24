#include <stdio.h>
int main()
{
    int i=0;
    double  sum=0,num[12]={0};
    for(i=0;i<12;i++)
    {
        scanf("%lf",&num[i]);
        sum+=num[i];
    }
        sum/=12;
        printf("$%.2f\n",sum);
    return 0;
}
