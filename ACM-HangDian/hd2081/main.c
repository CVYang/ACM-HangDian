#include <stdio.h>
#include <string.h>

int main()
{
    int n=0,i=0;
    char str[15];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(str);
        for(i=0;i<strlen(str);i++)
        {
            if(i==5)putc('6',stdout);
            if(i>=6)putc(str[i],stdout);
        }
        putc('\n',stdout);
    }
    return 0;
}
