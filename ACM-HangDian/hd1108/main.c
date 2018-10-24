#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,b=0;
    __int64 lcm=0,i=0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        for(i=1;;i++)
        {
            if(i%a==0&&i%b==0)
                {
                    lcm=i;
                    break;
                }
        }
        printf("%I64d\n",lcm);
        lcm=0;
    }
    return 0;
}
///±©Á¦½â·¨
