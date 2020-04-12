#include "AQueue.h"
#include <stdlib.h>
void InitAQueue(AQueue* Q)
{	
	Q->data = (AQueue*)malloc(sizeof(AQueue));
	if (Q->data==NULL)
	{
		exit(0);
	}
	Q->front = Q->rear = 0;
}

void DestoryAQueue(AQueue* Q)
{
	while (Q->front!=NULL)
	{
		Q->front = (Q->front + 1) % Q->length;
	}
	free(Q);
}

Status IsFullAQueue(const AQueue* Q)
{
	if ((Q->rear + 1) % Q->length==Q->front)
	{
		printf("队列已满");
		return TRUE;
	}
	return FALSE;
}

Status IsEmptyAQueue(const AQueue* Q)
{
	if (Q->front==Q->rear)
	{
		printf("队列已空");
		return TRUE;
	}
	return FALSE;
}

Status GetHeadAQueue(AQueue* Q, void* e)
{
	*e = Q->data;
	if (e!=NULL)
	{
		return TURE;
	}
	return FALSE;
}

int LengthAQueue(AQueue* Q)
{
	return (Q.rear-Q.front+MAXQUEUE)%MAXQUEUE;
}

Status EnAQueue(AQueue* Q, void* data)
{
	if (IsFullAQueue(Q)||IsEmptyAQueue(Q))
	{
		return FALSE;
	}
	else
	{
		Q->rear = data;
		Q->rear = (Q->rear + 1) % MAXQUEUE;
		return TRUE;
	}
}

Status DeAQueue(AQueue* Q)
{
	if (IsEmptyAQueue(Q))
	{
		return FALSE;
	}
	else
	{
		Q->front = (Q->front + 1) % MAXQUEUE;
		return TRUE;
	}
}

void ClearAQueue(AQueue* Q)
{
	while (Q->front != NULL)
	{
		Q->front = (Q->front + 1) % Q->length;
	}
}

void TraverseAQueue(const AQueue* Q, void(*foo)(void* q))
{
	q = Q->front;
	for (size_t i = 0; i < LengthAQueue(Q); i++)
	{
		APrint(q);
	}
}

void APrint(void* q)
{
	int i = 0;
	printf("第%d个元素是%d\n", i + 1, Q.data[q]);
}
