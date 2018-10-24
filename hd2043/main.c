#include <stdio.h>
#include <string.h>
int main()
{
    int m=0,j=0;
    char str[51]={'\0'};
    scanf("%d",&m);
    getchar();
    while(m--)
    {
        int flag[4]={0},counter=0,i=0,counter1=0;
        gets(str);
        i=strlen(str);
        if(i>=8&&i<=16)
        {
            for(j=0;j<i;j++)
            {
                if(str[j]<=57&&str[j]>=48){flag[0]=1;counter1++;}
                else if(str[j]<=90&&str[j]>=65){flag[1]=1;counter1++;}
                else if(str[j]<=122&&str[j]>=97){flag[2]=1;counter1++;}
                else if(str[j]=='!'||str[j]=='~'||str[j]=='@'||str[j]=='#'||str[j]==36||str[j]=='%'||str[j]=='^'){flag[3]=1;counter1++;}
                else ;
            }
            for(j=0;j<4;j++)
            {
                if(flag[j]==1)counter++;
            }
            if(counter>=3&&counter1==strlen(str))printf("YES\n");
            else printf("NO\n");
        }
        else printf("NO\n");
    }
    return 0;
}

