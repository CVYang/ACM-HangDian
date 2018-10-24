#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n=0,num[26]={0},i=0;
    char str1[100000];
    while(gets(str1))
    {
        n=strlen(str1);
        for(i=0;i<n;i++)
        {
            if(str1[i]>=97&&str1[i<=122])
            num[str1[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            printf("%c:%d\n",'a'+i,num[i]);
            num[i]=0;
        }
        printf("\n");
    }
    return 0;
}
