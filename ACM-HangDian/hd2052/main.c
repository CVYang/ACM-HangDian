#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height=0,width=0;
    char a[4]={'-','+','|',' '};
    while(scanf("%d %d" ,&width,&height)!=EOF)
    {
        int i=0,j=0;
        printf("%c",a[1]);
        for(j=0;j<height+2;j++)
        {
            if(j==height+1)
            {
                printf("%c",a[1]);
                for(i=0;i<width;i++)
                {
                    putc(a[0],stdout);
                }
                    printf("%c",a[1]);
            }
          else if(j==0)
          {
              for(i=0;i<width;i++)
            {
               putc(a[0],stdout);
            }
            printf("%c\n",a[1]);
          }
            else
            {
                printf("%c",a[2]);
               for(i=0;i<width;i++)
                printf("%c",a[3]);
                printf("%c\n",a[2]);
            }
        }
        printf("\n\n");
    }
    return 0;
}
