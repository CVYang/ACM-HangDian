#include <iostream>
#include <string.h>
#include <sys/fcntl.h>
#include <stdlib.h>
using namespace std;

char *GetString(void)
{
    char *p = "hello world";
    return p; // ���������������
}

void Test4(void)
{
    char *str = NULL;
    str = GetString(); // str ������������
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
