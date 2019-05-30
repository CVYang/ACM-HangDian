#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct TagElemType
{
    int data;
}ElemType;

typedef struct TagQueue
{
    ElemType *base;
    int front;        ///����ָ��
    int rear;         ///��βָ��
}Queue;

///����һ���ն���
void InitQueue(Queue *Q)
{
    Q ->base  = (ElemType *)malloc(MAX_SIZE*sizeof(ElemType));
    Q ->front = 0;
    Q ->rear  = 0;
}

///���ٶ���
void DestroyQueue(Queue *Q)
{
    if(Q ->base)free(Q ->base);
    Q ->base  = NULL;
    Q ->front = 0;
    Q ->rear  = 0;
}

///��Q���
void ClearQueue(Queue *Q)
{
    Q ->front = 0;
    Q ->rear  = 0;
}

///����
int EnQueue(Queue *Q, ElemType *e)
{
    if((Q ->rear+1)%MAX_SIZE == Q ->front)
        return 0;
    Q -> rear =(Q ->rear+1)%MAX_SIZE;
    Q -> base[Q ->rear] = *e;
    return 1;
}

///����
int DeQueue(Queue *Q, ElemType *e)
{
    if(Q ->front == Q ->rear)
        return 0;
    Q -> front =(Q ->front+1)%MAX_SIZE;
    if(e != NULL)
    {
        *e = Q -> base[Q ->front];
    }
    return 1;
}

int main()
{
    Queue Q;
    ElemType e,P;
    e.data = 25;
    InitQueue(&Q);
    EnQueue(&Q, &e);
    DeQueue(&Q, &P);
    printf("%d\n", P.data);
    return 0;
}
