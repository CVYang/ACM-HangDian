#include <stdio.h>
#include <stdlib.h>
int main()
{
    double n=0;
    while(scanf("%lf",&n)!=EOF)
    {
        char b[100];
    itoa(n,b,2);///������ת�����ַ���
    printf("%s\n",b);
    }
    return 0;
}
