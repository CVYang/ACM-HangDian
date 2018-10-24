#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//    __int64 a=0,b=0;
//    int t=1;
//    while(scanf("%I64d %I64d",&a,&b)!=EOF)
//    {
//        while(b--)
//        {
//            t*=a;
//            t=t%10;
//        }
//        printf("%d\n",t);
//        t=1;
//    }
//    return 0;
//}
int main(void)
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int ans = 1;
        a = a % 10;
        while(b>0)
            {
                if(b % 2 == 1)ans = (ans * a) % 10;
                b = b/2;
                a = (a * a) % 10;
            }
        printf("%d\n" ,ans);
    }
    return 0;
    }
