#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int i=0,j=0,k=0,l=0,m=0,n=0,p=0;
    cout<<"p1"<<"  "<<"p2"<<"  "<<"p3"<<"  "<<"p4"<<"  "<<"1"<<"  "<<"2"<<"  "<<"3"<<endl;
    for(i=8;i>=0;i--)
        for(j=8;j>=0;j--)
        {
            if(j==1||j==4||j==7)continue;
            for(k=0;k<=3;k++)
            {
             if(k>3)continue;
             for(l=0;l<5;l++)
                for(m=0;m<5;m++)
                    for(n=0;n<5;n++)
                        for(p=0;p<5;p++)
                    {
                        if(i+j+k+l+m+n+p==16&&(k==3||k==1||k==0))
                        {
                            if(i+k==3||i+k==4||i+k==5||i+k==6||i+k==7||i+k==8||i+k==9||i+k==10)
                            {
                                if((i+j)!=1||(i+j)!=3||(i+j)!=4||(i+j)!=6||(i+j)!=11||(i+j)!=12||(i+j)!=14||(i+j)!=15)
                                {
                                    cout<<l<<"   "<<m<<"   "<<n<<"   "<<p<<"   "<<i<<"  "<<j<<"  "<<k<<endl;
                                    counter++;
                                }
                            }
                        }
                    }
            }
        }
        cout<<counter<<endl;
    return 0;
}
