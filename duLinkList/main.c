#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\86180\Desktop\QGѵ��Ӫ��һ����ѵ\�����ͷ�ļ�\duLinkList\duLinkedList.h"

int main(){
	int a;
	DuLNode *p, DuLNode *q;
	ElemType *e�� 
	printf("������ѡ��1.InitList\n2.DestroyList\n3.InsertBeforeList\n4.InsertAfterList\n5.DeleteList\n6.TraverseList\n");
	scanf("%d",&a);
	switch(a){
		case 1:
			Status InitList_DuL(DuLinkedList *L);
			break;
		case 2:
			void DestroyList_DuL();
			break;
		case 3:
			printf("���������λ��p������Ľ��q:");
			scanf("%d %d",&p,&q);
			Status InsertBeforeList_DuL(DuLNode *p, DuLNode *q);
			break;
		case 4:
			printf("���������λ��p������Ľ��q:");
			scanf("%d %d",&p,&q);
			Status InsertAfterList_DuL(DuLNode *p, DuLNode *q);
			break;
		case 5:
			printf("������ɾ���Ľ��p������ֵ��e:");
			scanf("%d %d",&p,&e);
			Status DeleteList_DuL(DuLNode *p, ElemType *e);
			break;
		case 6:
			void TraverseList_DuL(DuLinkedList L, void (*visit)(ElemType e));
			break; 
	}
	return 0;
}
