#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ElemType
{
    int num;
    int node;
    char name[10];
}ElemType;

typedef struct tagNODE
{
    ElemType data;
    struct tagNODE *link, *plink;
}LNODE, *linklist;


///ͷ�巨����������
void create(linklist *L, int n)
{
    int i=0;
    linklist s;
    *L = (linklist)malloc(sizeof(LNODE));
    (*L) -> link = NULL;
    for(i = 0; i < n; i++)
    {
        s = (linklist)malloc(sizeof(LNODE));
        s ->data.num = i;
        s -> link = (*L) -> link;
        (*L) -> link = s;
    }
}

///β�巨 ͷ�ڵ���� ˫������
void create2(linklist *L, int n)
{
    int i=0 ;
    linklist temp;
    *L = (linklist)malloc(sizeof(LNODE));
    (*L) -> link = NULL;
    (*L) -> plink = NULL;

    for(i = 0; i < n; i++)
    {
        temp = (linklist)malloc(sizeof(LNODE));
        temp ->data.num = 10-i;
        temp ->data.name[0] ='0'+i;
        temp -> link = NULL;
        temp -> plink = (*L);
        (*L) -> link = temp;
        (*L) = temp;
    }
}

///β�巨  ˫��ѭ������
void create3(linklist *L, int n)
{
    int i=0 ;
    linklist temp;
    *L = (linklist)malloc(sizeof(LNODE));
    (*L) -> link = NULL;
    (*L) -> plink = NULL;

    for(i = 0; i < n; i++)
    {
        temp = (linklist)malloc(sizeof(LNODE));
        temp ->data.num = 10-i;
        temp ->data.name[0] ='0'+i;
        temp -> link = NULL;
        temp -> plink = (*L);
        (*L) -> link = temp;
        (*L) = temp;
    }
    ///Ѱ��β���
    while((*L) -> plink != NULL)
    {
        (*L) = (*L) -> plink;
    }
    if((*L) -> plink == NULL)
    {
        temp -> link = (*L);
    }
}

///��ʼ������
void InitList(linklist *L)
{
    *L = (linklist)malloc(sizeof(LNODE));
    (*L) -> link = NULL;
    (*L) -> plink = NULL;
}

///�ж������Ƿ�Ϊ��
int IsListEmpty(linklist L)
{
    return L -> link == NULL;
}

///ɾ������
void ListDelete(linklist *L)
{
    linklist q, p=*L;
    while(p != NULL)
    {
        q = p -> link;
        free(p);
        p = q;
    }
    *L = NULL;
}
int main()
{
    int i = 0, count = 0;
    linklist h, p, s, llist, llist2, llist3;
    p = (linklist)malloc(sizeof(LNODE));
    p -> link = NULL;
    h = p;
    for(i = 0; i < 5; i++)
    {
        s = (linklist)malloc(sizeof(LNODE));
        s ->data.num = i;

        s -> link = p -> link;
        p -> link = s;
    }
    linklist hh;
    hh = h;
    for(i = 0; i < 5; i++)
    {
        hh = hh -> link;
        printf("%d\n",hh ->data.num);
    }
    create(&llist,10);
    hh = llist;
    for(i = 0; i < 10; i++)
      {
        hh = hh -> link;
        printf("%d\n",hh ->data.num);
    }

    create2(&llist2,10);
    hh = llist2;
    while(hh -> plink != NULL)
    {
        printf("%d   %c    %d\n",hh ->data.num, hh->data.name[0],hh->plink);
        hh = hh -> plink;
    }
    if(hh -> plink == NULL)
    {
        while(hh -> link != NULL)
        {
            hh = hh -> link;
            printf("%d   %c    %d\n",hh ->data.num, hh->data.name[0],hh->link);

        }
    }

    create3(&llist3,10);
    hh = llist3;
    while(hh -> link != NULL)
    {
        count++;
        printf("%d   %c    %d\n",hh ->data.num, hh->data.name[0],hh->link);
        hh = hh -> link;
        if(count == 100)break;
    }
    return 0;
}
