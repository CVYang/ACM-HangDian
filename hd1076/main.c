#include <stdio.h>
int main()
{
    int year=0,n=0,m=0;
    scanf("%d",&n);
    while(n--)
    {
        int i=0,count=0;
        scanf("%d %d",&year,&m);
            for(i=year;i<=1000000;i++)
            {
               if((i%4==0&&i%100!=0)||i%400==0)
                {
                    count++;
                    if(count==m)printf("%d\n",i);
                }
            }
    }
    return 0;
}
//#include <stdio.h>
//int main(int argc, char *argv[])
//{
//	int a,b,c,d,i,j,k;
//	scanf("%d",&a);
//	while(a--)
//	{
//		scanf("%d%d",&b,&c);
//		while(c)
//		{if(b%4==0&&b%100!=0||b%400==0) {c--;b=b+4;}
//		else b++;
//
//		}
//		printf("%d\n",b-4);
//	}
//	return 0;
//}
