#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,i=0,j=0;
    int prime[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    while(scanf("%d",&n)!=EOF)
    {
        int k=0,count=1,l=0,counter=0,sequence[20]={0};
        sequence[0]=1;
        for(i=2;i<=n;i++)
        {
            for(j=0;j<15;j++)
            {
                if(sequence[k]+i==prime[j])//�ҵ�һ���������
                {
                    for(l=0;l<=count;l++)//������û���ظ�
                        {
                            if(i==sequence[l])break;
                            else counter++;
                        }
                    if(counter==count+1)
                        {
                            k++;
                            sequence[k]=i;//���û���ظ���
                            break;//�ҵ���һλ�õ��� ����ѭ��
                        }
                }
            }
        }
        for(i=0;i<k;i++)
            printf("%d ",sequence[i]);
    }
    return 0;
}
