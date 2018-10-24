#include <stdio.h>
#include <string.h>

int main()
{
    int n=0,i=0,j=0;
    scanf("%d",&n);
    while(n--)
    {
        char str[100002]={"\0"},str1[100002]={"\0"};
        int count=1;
        getchar();
        scanf("%s",str);
        j=0;
        for(i=0;i<strlen(str);i++)
            {
                while(str[i]==str[i+1])
                {
                    count+=1;
                    i++;
                }
                if(count!=1)
                {
                    if(count<=9)
                    {
                        str1[j]=(char)count+'0';
                        j++;
                        str1[j]=str[i];
                    }
                    else
                    {
                        int sum[5]={0},s,k=0,flag=0;
                        s=count;
                        for(k=0;k<5;k++)
                        {
                            sum[k]=s%10;
                            s/=10;
                        }
                        for(k=4;k>=0;k--)
                        {
                            if(sum[k]!=0&&flag==0)
                            {
                                str1[j]=(char)sum[k]+'0';
                                flag=1;
                                j++;
                            }
                            else if(flag==1)
                            {
                                str1[j]=(char)sum[k]+'0';
                                j++;
                            }
                        }
                        str1[j]=str[i];
                    }
                }
                else str1[j]=str[i];
                j++;
                count=1;
            }
            puts(str1);
    }
    return 0;
}
