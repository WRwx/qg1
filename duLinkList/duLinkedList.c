#include "../head/duLinkedList.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *  @name        : Status InitList_DuL(DuLinkedList *L)
 *	@description : initialize an empty linked list with only the head node
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */

Status InitList_DuL(DuLinkedList *L) {
	ElemType data;
	*L=(DuLNode*)malloc(sizeof(DuLNode));
	if(!L) return ERROR;
	(*L)->next=NULL;   //��ʼ��ͷָ�� 
	(*L)->data=data;
	(*L)->prior=(*L)->next=NULL;   //�γ�˫���� 
	return SUCCESS;
}

/**
 *  @name        : void DestroyList_DuL(DuLinkedList *L)
 *	@description : destroy a linked list
 *	@param		 : L(the head node)
 *	@return		 : status
 *  @notice      : None
 */
void DestroyList_DuL(DuLinkedList *L){
	DuLinkedList *x=NULL;
	while(*L!=NULL){
		(*x)=(*L)->next;    //��ȡ��� 
		free(*x);			//�ͷŽ�� 
	}
	free(*L);              //�ͷ����һ����� 
	(*L)->next=NULL;
}

/**
 *  @name        : Status InsertBeforeList_DuL(DuLNode *p, LNode *q)
 *	@description : insert node q before node p
 *	@param		 : p, q
 *	@return		 : status
 *  @notice      : None
 */
Status InsertBeforeList_DuL(DuLNode *p, DuLNode *q) {
	q->prior=p->prior;		// ��ȡǰһ���ĵ�ַ 
	p->prior->next=q;		// ��ǰһ����nextָ���½�� 
	q->next=p;				 
	p->prior=q;
	return SUCCESS;
}

/**
 *  @name        : Status InsertAfterList_DuL(DuLNode *p, DuLNode *q)
 *	@description : insert node q after node p
 *	@param		 : p, q
 *	@return		 : status
 *  @notice      : None
 */
Status InsertAfterList_DuL(DuLNode *p, DuLNode *q) {
	
	return SUCCESS;
}

/**
 *  @name        : Status DeleteList_DuL(DuLNode *p, ElemType *e)
 *	@description : delete the first node after the node p and assign its value to e
 *	@param		 : p, e
 *	@return		 : status
 *  @notice      : None
 */
Status DeleteList_DuL(DuLNode *p, ElemType *e) {
	ElemType *i;
	*i=p->data;			//����ֵ 
	e=i;
	DuLNode *q;
	q->prior->next=q->next;			//��q���ǰһ����dataָ��q 
	q->next->prior=q->prior; 		 
	free(q);						//ɾ�� 
	return SUCCESS;
}

/**
 *  @name        : void TraverseList_DuL(DuLinkedList L, void (*visit)(ElemType e))
 *	@description : traverse the linked list and call the funtion visit
 *	@param		 : L(the head node), visit
 *	@return		 : Status
 *  @notice      : None
 */
void TraverseList_DuL(DuLinkedList L, void (*visit)(ElemType e)) {
	while(L!=NULL){
	printf("%d",L);
	}
}
