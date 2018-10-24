#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, i = 0, j = 0;
    int tar = 0, k = 0;
    double num[100];
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%lf %d",&num[i], &k);
        for(j = 0; j < k; j++)
        {
            num[i] *= 10;
        }
        tar = (int)num[i];
        printf("%d",tar%10);
        if(i != n-1)
            printf("\n");
    }
    return 0;
}
