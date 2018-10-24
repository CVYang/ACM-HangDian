#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0,l=0;
    long int sum=0;
    char str1[256];
    while(gets(str1)&&str1[0]!='#')
    {
        l=strlen(str1);
        for(i=1;i<=l;i++)
        {
            if(str1[i-1]==' ')sum+=0;
            else sum+=i*(str1[i-1]-64);
        }
        printf("%ld\n",sum);
        sum=0;
    }
    return 0;
}
