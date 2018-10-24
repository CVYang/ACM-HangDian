#include <stdio.h>
#include <string.h>
int main()
{
    int n=0,m=0,p=0;
    int i=0,j=0;
    char str[101][51],str1[1][51]={"\0"};
    int counter[101]={0};
    scanf("%d %d",&n,&m);
    getchar();
    while(p<m)
    {
        ///scanf("%s",&str[m]);
        gets(str[p]);
        for(j=0;j<n-1;j++)
        for(i=j;i<n;i++)
        {
            if(str[p][j]>str[p][i])counter[p]++;
        }
        p++;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(counter[j]>counter[j+1])
            {
                strcpy(str1[0],str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],str1[0]);
                counter[j]=counter[j]+counter[j+1];
                counter[j+1]=counter[j]-counter[j+1];
                counter[j]=counter[j]-counter[j+1];
            }
        }
    }
    for(i=0;i<m;i++)
        {
           if(i!=m-1) printf("%s\n",str[i]);
           else  printf("%s",str[i]);
        }
    return 0;
}


