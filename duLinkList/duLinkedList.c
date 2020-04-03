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
	(*L)->next=NULL;   //初始化头指针 
	(*L)->data=data;
	(*L)->prior=(*L)->next=NULL;   //形成双链表 
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
		(*x)=(*L)->next;    //提取结点 
		free(*x);			//释放结点 
	}
	free(*L);              //释放最后一个结点 
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
	q->prior=p->prior;		// 获取前一结点的地址 
	p->prior->next=q;		// 将前一结点的next指向新结点 
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
	*i=p->data;			//保存值 
	e=i;
	DuLNode *q;
	q->prior->next=q->next;			//将q结点前一结点的data指向q 
	q->next->prior=q->prior; 		 
	free(q);						//删除 
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
