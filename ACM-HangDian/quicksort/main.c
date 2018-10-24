#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[], int n, int left, int right)
{
    int i=0,j=0,t=0,k=0;
    if(left < right)
    {
        i=left;
        j=right+1;
        while(1)
        {
            while(i+1 < n && a[++i] < a[left]);
            while(j-1 > -1 && a[--j] > a[left]);
            if(i >= j)break;
            t = a[i];
            a[i] = a[j];
            a[j]=t;
            for(k=0;k<n;k++)
            printf("%d ",a[k]);
        printf("\n");
        }
        t = a[left];
        a[left] = a[j];
        a[j] = t;///将关键数据交换

        quicksort(a,n,left,j-1);///递归关键数据的左半部分
        quicksort(a,n,j+1,right);///递归关键数据的右半部份
    }
}

int main()
{
    int i=0,n=0;
    int num[100]={0};
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
        quicksort(num, n, 0, n-1);
        printf("\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",num[i]);
        }
    }
    printf("Hello world!\n");
    return 0;
}
