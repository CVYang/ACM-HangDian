#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    double sum=0,penny=0;
    for(i=0;i<12;i++)
    {
        scanf("%lf",&penny);
        sum+=penny;
    }
    sum/=12;
    sum*=100;
    sum+=0.5;
    sum=(int)sum;
    printf("$%.2lf\n",sum/100);
    return 0;
}
