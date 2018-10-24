#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=100, j=200;
    int *p1, *p2;
    p1= &i;
    p2= &j;
    *p1 += 1;
    printf("%d %d\n",i,*p1);
    p1= p2;
    *p1 += 1;
    printf("%d %d\n",j,*p1);
    printf("%d %d\n",i,j);
    printf("Hello world!\n");
    return 0;
}
