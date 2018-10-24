#include <iostream>
using namespace std;
///暴力排序，复杂度高但是规模小，简单。
int main()
{
    int i=0,j=0,k=0,l=0,m=0,counter=0;
    for(i=1;i<6;i++)
    for(j=1;j<6;j++)
    for(k=1;k<6;k++)
    for(l=1;l<6;l++)
    for(m=1;m<6;m++)
    {
        if(((i!=j)&&(i!=k)&&(i!=l)&&(i!=m))&&k!=4&&j!=k&&j!=m&&j!=l&&k!=l&&k!=m&&l!=m)
           {
               if((i+j)!=8&&(k+j)!=8&&(k+l)!=8&&(l+m)!=8)
               {
                   counter++;
                   cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<m;
                   cout<<"\n";
               }
           }
    }
    cout<<counter<<"种排列"<<endl;
    return 0;
}
