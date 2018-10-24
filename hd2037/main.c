#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,i=0;
    int tis[100]={0};
    int tie[100]={0};
    int time[100]={0};
    while(scanf("%d",&n)!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&tis[i]);
            scanf("%d",&tie[i]);
            time[i]=tie[i]-tis[i];
        }
        for(i=0;i<n;i++)
        {

        }
    }
    return 0;
}
