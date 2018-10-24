#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000]={"\0"};
    int i=0,count=0;
    while(gets(str)&&str[0]!='#')
    {
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]==' ')count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
