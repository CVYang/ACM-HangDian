#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,i=0;
    int score[1000][1000];
    double sum=0,sum_credit=0;
    scanf("%d",&n);
    while(n--)
    {
        for(i=0;i<n;i++)
        {
            scanf("%f %f",score[i][0],score[i][1]);

                if(score[i][1]>=90&&score[i][i]<100)
                {
                    sum_credit+=score[i][0];
                    sum+=score[i][0]*4;
                }
                if(score[i][1]>=80&&score[i][i]<90)
                {
                    sum_credit+=score[i][0];
                    sum+=score[i][0]*3;
                }
                if(score[i][1]>=70&&score[i][i]<80)
                {
                    sum_credit+=score[i][0];
                    sum+=score[i][0]*2;
                }
                if(score[i][1]>=60&&score[i][i]<70)
                {
                    sum_credit+=score[i][0];
                    sum+=score[i][0]*1;
                }
                if(score[i][1]>=0&&score[i][i]<60)
                {
                    sum_credit+=score[i][0];
                    sum+=score[i][0]*0;
                }
        }
        printf("%.2f\n",sum/sum_credit);
        sum=0;
        sum_credit=0;
    }
    return 0;
}
