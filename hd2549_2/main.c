#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n = 0, i = 0, j = 0;
    int k = 0, length = 0, pos = 0;
    char num[1000];
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%s %d",&num, &k);
        length = strlen(num);
        for(j = 0; j < length; j++)
        {
            if(num[j] == '.')
               {
                   pos = j;
                   break;
               }
        }
        if((pos+k) < length)
            printf("%c",num[pos + k]);
        else
            printf("0");

            printf("\n");
    }
    return 0;
}
