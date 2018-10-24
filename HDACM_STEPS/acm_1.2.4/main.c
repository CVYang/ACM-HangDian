#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a=0,b=0,n=0,i=0;
    double temp=0;
    char c;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%c %d %d",&c,&a,&b);
        getchar();
        switch(c)
        {
            case '+' : printf("%d\n",a+b);break;
            case '-' : printf("%d\n",a-b);break;
            case '*' : printf("%d\n",a*b);break;
            case '/' :
                {
                    if(((float)a/b-a/b)==0)
                    {
                        printf("%d\n",(int)a/b);
                    }
                    else
                    {
                        temp=(float)a/b;
                        temp*=100;
                        temp=(int)(temp+0.5);
                        temp/=100;
                        printf("%.2lf\n",temp);
                    }
                    break;
                }
            default: break;
        }
    }
    return 0;
}
