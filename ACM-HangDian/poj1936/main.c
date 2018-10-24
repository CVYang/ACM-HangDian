#include <stdio.h>
#include <string.h>
int main()
{
    char s[100102],t[100102],r[100102];
    while(scanf("%s %s",s,t)!=EOF)
    {
        long int i=0,j=0,k=0;
        if(strlen(t)<strlen(s))printf("No\n");
        else
        {
            for(i=0;i<strlen(s);i++)
            {
                for(j=i;j<strlen(t);j++)
                {
                    if(s[i]==t[j])
                    {
                        r[k]=t[j];
                        k++;
                        break;
                    }
                }
            }
            if(strcmp(s,r)==0)printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char s[100002]={"\0"},t[100002]={"\0"},r[100002]={"\0"};
//    while(scanf("%s %s",s,t)!=EOF)
//    {
//      long int i=0,j=0,k=0;
//        if(strlen(t)<=strlen(s))printf("No\n");
//        else
//        {
//            for(i=0;i<strlen(s);i++)
//            {
//                for(j=0;j<strlen(t);j++)
//                {
//                    if(s[i]==t[j])r[k]=t[j];
//                      k++;
//                      break;
//                }
//            }
//            if(strcmp(s,r)==0)printf("Yes\n");
//        }
//    }
//    return 0;
//}

