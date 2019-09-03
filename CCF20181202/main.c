#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 0, sumt = 0,sum = 0;
    int kt[10001][2]={0};
    int RGlight[3]={0};
    int i = 0, j = 0, l =0;
    scanf("%d %d %d",&RGlight[0],&RGlight[1],&RGlight[2]);
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d",&kt[i][0],&kt[i][1]);
    }
    for(j = 0; j < n; j++)
    {
        if(kt[j][0] == 0)
        {
            sumt += kt[j][1];
            sum = sumt;
        }
        if(kt[j][0] == 1)
        {
            kt[j][1] = sum%(RGlight[0]+RGlight[1]+RGlight[2]) - kt[j][1];
            if(kt[j][1] < 0)
            {
                kt[j][1] *= -1;
            }
            else if(kt[j][1] < RGlight[2])
            {
                kt[j][0] = 3;
                kt[j][1] = RGlight[2] - kt[j][1];
            }
            else if(kt[j][1] < (RGlight[2]+RGlight[1]))
            {
                kt[j][0] = 2;
                kt[j][1] = (RGlight[2]+RGlight[1]) - kt[j][1];
            }
            else if(kt[j][1] < (RGlight[0]+RGlight[1]+RGlight[2]))
            {
                kt[j][0] = 1;
                kt[j][1] = (RGlight[0]+RGlight[1]+RGlight[2]) - kt[j][1];
            }
        }
        else if(kt[j][0] == 2)
        {
            kt[j][1] = sum%(RGlight[0]+RGlight[1]+RGlight[2]) - kt[j][1];
            if(kt[j][1] < 0)
            {
                kt[j][1] *= -1;
            }
            else if(kt[j][1] < RGlight[0])
            {
                kt[j][0] = 1;
                kt[j][1] = RGlight[0] - kt[j][1];
            }
            else if(kt[j][1] < (RGlight[0]+RGlight[2]))
            {
                kt[j][0] = 3;
                kt[j][1] = (RGlight[2]+RGlight[0]) - kt[j][1];
            }
            else if(kt[j][1] < (RGlight[0]+RGlight[1]+RGlight[2]))
            {
                kt[j][0] = 2;
                kt[j][1] = (RGlight[0]+RGlight[1]+RGlight[2]) - kt[j][1];
            }
        }
        else if(kt[j][0] == 3)
        {
            kt[j][1] = sum%(RGlight[0]+RGlight[1]+RGlight[2]) - kt[j][1];
            if(kt[j][1] < 0)
            {
                kt[j][1] *= -1;
            }
            else if(kt[j][1] < RGlight[1])
            {
                kt[j][0] = 2;
                kt[j][1] = RGlight[1] - kt[i][1];
            }
            else if(kt[j][1] < (RGlight[0]+RGlight[1]))
            {
                kt[j][0] = 1;
                kt[j][1] = (RGlight[0]+RGlight[1]) - kt[j][1];
            }
            else if(kt[j][1] < (RGlight[0]+RGlight[1]+RGlight[2]))
            {
                kt[j][0] = 3;
                kt[j][1] = (RGlight[0]+RGlight[1]+RGlight[2]) - kt[j][1];
            }
        }
        if(kt[j][0] == 1)sumt += kt[j][1];
        if(kt[j][0] == 2)sumt += (kt[j][1]+RGlight[0]);
        printf("-------------  %d  --------------\n",i);
        for(l = 0; l < n; l++)
        {
            printf("%d %d %d %d\n",kt[l][0],kt[l][1],sum,sumt);
        }
    }
    printf("%d\n",sumt);
    sumt = 0;
    memset(kt,0,sizeof(kt));
    memset(RGlight,0,sizeof(RGlight));
    return 0;
}
