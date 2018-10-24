#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m=0,n=0,i=0,l=0,j=0,count=0;
    char str1[5];
    while(scanf("%d %d",&n,&m)!=EOF&&(n!=0||m!=0))
    {
        for(i=n;i<=m;i++)
        {
            itoa(i,str1,10);
            l=strlen(str1);
            for(j=0;j<l;j++)
            {
                if(str1[j]==4)
                {
                    count++;
                    break;
                }
//                if(((str1[j]-48)*(str1[j+1]-48)==12)&&((str1[j]-48)+(str1[j+1]-48)==8))
//                {
//                    count++;
//                    break;
//                }
            }
        }
        printf("%d\n",m-n+1-count);
    }

    return 0;
}
