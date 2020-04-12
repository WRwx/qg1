#include "LQueue.h"
#include <stdlib.h>
void InitLQueue(LQueue* Q)
{
	Q->front = Q->rear = (LQueue*)malloc(sizeof(LQueue));
	if (NULL==Q->front)
	{
		exit(0);
	}
	Q->front->next = NULL;
}

Status IsEmptyLQueue(const LQueue* Q)
{
	if (Q->front==Q->rear)
	{
		return TRUE;
	}
	return FALSE;
}

Status GetHeadLQueue(LQueue* Q, void* e)
{
	*e = Q->data;
	if (e != NULL)
	{
		return TURE;
	}
	return FALSE;
}

int LengthLQueue(LQueue* Q)
{
	return (Q.rear - Q.front + 30) % 30;
}

Status EnLQueue(LQueue* Q, void* data)
{
	if (IsEmptyLQueue(Q))
	{
		return FALSE;
	}
	else
	{
		Node* q = (Node*)malloc(sizeof(Node));
		q->data = data;
		q->next = NULL;
		if (Q->front == NULL)
		{
			Q->front = q;
			Q->rear = q;
			return;
		}
		Q->rear->next = q;
		Q->rear = q;
		return TRUE;
	}
}

Status DeLQueue(LQueue* Q)
{
	LQueue* q = NULL;
	if (IsEmptyLQueue(Q))
	{
		return FALSE;
	}
	else
	{
		q = Q->front->next;
		Q->front->next = q->next;
		if (Q->rear == q) {
			Q->rear = Q->front;
		}

		free(q);
		return TRUE;
	}
}

void ClearLQueue(LQueue* Q)
{
	while (Q->front != NULL)
	{
		Q->front = (Q->front + 1) % Q->length;
	}
}

void TraverseLQueue(const LQueue* Q, void(*foo)(void* q))
{
	q = Q->front;
	LQueue q = Q.front->next;
	while (q != NULL) {
		LPrint(q);
		q = q->next;
		i++;
}

void LPrint(void* q)
{
	int i = 1;
	printf("第%d个元素是%d\n", i + 1, q);
}
