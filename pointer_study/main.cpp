#include <iostream>
#include <string.h>
#include <sys/fcntl.h>
#include <stdlib.h>
using namespace std;

char *GetString(void)
{
    char *p = "hello world";
    return p; // 编译器将提出警告
}

void Test4(void)
{
    char *str = NULL;
    str = GetString(); // str 的内容是垃圾
    exit(0);
    str="dd";
    cout<< str << endl;
    str
}
int main()
{
    Test4();
    return 0;
}
