#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,i=0;
    double score=0,credit=0;
    double sum=0,sum_credit=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lf %lf",&credit,&score);
            if(score>=90&&score<=100)
            {
                sum_credit+=credit;
                sum+=credit*4;
            }
            if(score>=80&&score<90)
            {
                sum_credit+=credit;
                sum+=credit*3;
            }
            if(score>=70&&score<80)
            {
                sum_credit+=credit;
                sum+=credit*2;
            }
            if(score>=60&&score<70)
            {
                sum_credit+=credit;
                sum+=credit;
            }
            if(score>=0&&score<60)
            {
                sum_credit+=credit;
            }
        }
        if(sum==0)printf("-1\n");
        else printf("%.2f\n",sum/sum_credit);
        sum=0;
        sum_credit=0;
    }
    return 0;
}
