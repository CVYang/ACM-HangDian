#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    scanf("%d",&n);

    while(n--)
    {
        char letter[2];
        int y=0;
        getchar();
        scanf("%c %d",&letter[0],&y);
        if(letter[0]>=65&&letter[0]<=90)printf("%d\n",(letter[0]-64)+y);
        else if(letter[0]>=97&&letter[0]<=122)printf("%d\n",-(letter[0]-96)+y);
    }
    return 0;
}
