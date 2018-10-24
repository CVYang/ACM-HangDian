#include <iostream>
using namespace std;
void sort (int arr[100] ,int x)
{
    int i=0,j=0,temp=0;
    for(i=0;i<x;i++)
        for(j=i;j<x;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        for(i=0;i<x;i++)
            cout<<arr[i]<<" ";
}
int main()
{
    int num[]={2,28,190,260,35,48,1001,292,309};
    int n=0;
    n=sizeof(num)/sizeof(num[0]);
    sort(num,n);
    return 0;
}
