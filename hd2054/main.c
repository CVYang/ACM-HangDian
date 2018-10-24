#include <stdio.h>
#include <stdlib.h>

int main()
{
    double m,n;
    while(scanf("%lf%lf",&m,&n)!=EOF)
    {
        if(abs(m-n)<10e-6)
            printf("YES\n");
       else  printf("NO\n");
    }
    return 0;
}
