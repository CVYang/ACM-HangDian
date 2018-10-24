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
    int front;        ///队首指针
    int rear;         ///队尾指针
}Queue;

///构造一个空队列
void InitQueue(Queue *Q)
{
    Q ->base  = (ElemType *)malloc(MAX_SIZE*sizeof(ElemType));
    Q ->front = 0;
    Q ->rear  = 0;
}

///销毁队列
void DestroyQueue(Queue *Q)
{
    if(Q ->base)free(Q ->base);
    Q ->base  = NULL;
    Q ->front = 0;
    Q ->rear  = 0;
}

///将Q清空
void ClearQueue(Queue *Q)
{
    Q ->front = 0;
    Q ->rear  = 0;
}

///进队
int EnQueue(Queue *Q, ElemType *e)
{
    if((Q ->rear+1)%MAX_SIZE == Q ->front)
        return 0;
    Q -> rear =(Q ->rear+1)%MAX_SIZE;
    Q -> base[Q ->rear] = *e;
    return 1;
}

///出队
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
