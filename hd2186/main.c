#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,num=0,res=0,doc=0,com=0,guide=0;
    while(scanf("%d",&n)!=EOF)
    {
        while(n--)
        {
            scanf("%d",&num);
            res = num/2;
            guide += res%10>0 ? (res/10)+1:res/10;

            doc = (num-res)*2/3;
            guide += doc%10>0 ? (doc/10)+1:doc/10;

            com = num-res-doc;
            guide += com%10>0 ? (com/10)+1:com/10;

            printf("%d\n",guide);
            guide=0;
        }
    }
    return 0;
}
