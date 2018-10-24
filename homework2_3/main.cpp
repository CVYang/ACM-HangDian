#include <iostream>
#include <stdlib.h>

#define new ((struct num *)malloc(sizeof(struct num)))

using namespace std;

struct num
    {
        int n;
        struct num *next;
    };

struct num *creat(struct num *head)
{
    struct num *p1,*p2;
    int x,i;
    p1=p2=(struct num*)malloc(sizeof(struct num));
    cout<<"请输入值，值等于0结束，值存放地址为：p1_ADDR= "<<" "<<p1<<endl;
    cin>>x;
    p1->n = x;
    p1->next = NULL;
    while(p1->n!=0)
    {
        if(head==NULL)
            head=p1;
        else
            p2->next=p1;
        p2=p1;
        p1=(struct num*)malloc(sizeof(struct num));
        i++;
        cout<<"请输入值，值小于等于0结束，值存放地址为：p _ADDR= "<<" "<<p2<<endl;
        cin>>x;
        p1->n=x;
    }

    free(p1);
    p1=NULL;
    p2->next = NULL;
    cout<<"链表输入结束（END）"<<endl;
    return head;
};
void print(struct num *head)
{
    int value=0,counter=0;
    struct num *temp,*x;
    temp=head;
    cout<<"链表存入的值按从小到大排序为："<<endl;

    for(temp=head;temp!=NULL;temp=temp->next)
    {
        for(x=temp;x!=NULL;x=x->next)
         if(temp->n > x->n)
         {
             counter++;
            value =temp->n;
            temp->n = x->n;
            x->n = value;
         }
    }
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->n<<endl;
        temp = temp->next;
    }
    cout<<"比较次数: "<<counter<<endl;
    cout<<"链表打印结束!!";
}

int main()
{
    struct num *head;
    head=NULL;
    head=creat(head);
    print(head);
    return 0;
}
