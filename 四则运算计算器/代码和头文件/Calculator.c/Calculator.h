#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
//��ջ
typedef enum Status
{
	ERROR = 0,
	SUCCESS = 1
} Status;

typedef int ElemType;

typedef  struct StackNode
{
	ElemType data;
	struct StackNode* next;
}StackNode, * CuStackPtr;

typedef  struct  CuStack
{
	CuStackPtr top;
	int	count;
}CuStack;
Status initLStack(CuStack* s);//����ͷ����ҳ�ʼ��
void create_new(CuStack* s, CuStack* n);//�����½��
Status getTopLStack(CuStack* s, ElemType* e);//�õ�ջ��Ԫ��
Status if_char(CuStack s);//�ж��Ƿ�Ϊ�����
Status if_prio(char b);//�ж����ȼ�
Status pushLStack(CuStack* s, ElemType data);//��ջ
Status popLStack(CuStack* s, ElemType* data);//��ջ

#endif 