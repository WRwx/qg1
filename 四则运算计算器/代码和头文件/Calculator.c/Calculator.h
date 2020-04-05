#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
//链栈
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
Status initLStack(CuStack* s);//建立头结点且初始化
void create_new(CuStack* s, CuStack* n);//创建新结点
Status getTopLStack(CuStack* s, ElemType* e);//得到栈顶元素
Status if_char(CuStack s);//判断是否为运算符
Status if_prio(char b);//判断优先级
Status pushLStack(CuStack* s, ElemType data);//入栈
Status popLStack(CuStack* s, ElemType* data);//出栈

#endif 