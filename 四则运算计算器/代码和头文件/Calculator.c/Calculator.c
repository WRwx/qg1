#include <stdlib.h>
#include "C:\Users\86180\Desktop\qg2\四则运算计算器\代码和头文件\Calculator.c\Calculator.h"

Status initLStack(CuStack* s)
{
	s = (CuStack*)malloc(sizeof(CuStack));
	s->top->next = NULL;
	return 1;
}
void create_new(CuStack* s,CuStack* n)
{	
	n = (CuStack*)malloc(sizeof(CuStack));
	n->top->data = s->top->next;
}
Status getTopLStack(CuStack* s, ElemType* e)
{
	CuStackPtr* p = s->top->next;
	return 1;
}
Status if_char(char s)
{
	switch (s)
	{	
	case '+':
	case '-':
	case '*':
	case '/':
	case '(':
	case ')':
	case '#':return s;
	default:return 0;
	}
}
Status if_prio(char b)
{
	char L=getTopLStack();
	if (if_char(char b)==1)
	{
		switch () {

		}
	}
	return 1;
}
