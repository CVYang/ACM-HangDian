#include <stdio.h>
#include <sting.h>

int main()
{
    __int64 num[10000]={0},n,i=0;
    char str[1000]={"\0"};
    while(scanf("%I64d",&n)!=EOF)
    {
        num[2]=1;
        num[3]=1;
        for(i=4;i<10000;i++)
            num[i]=num[i-1]+2*num[i-2];
        printf("%I64d\n",num[n]);
    }
    return 0;
}
//只找到规律还不行  64位都会溢出 只能存在字符串里
