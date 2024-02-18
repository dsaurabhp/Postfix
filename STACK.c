#include "myheader.h"
extern char STACK[MAX];
extern int top;
void PUSH(char ch)
{
	STACK[++top]=ch;
}
char POP(void)
{
	if(top==-1)
		return -1;
	return STACK[top--];
}
char PEEK(void)
{
	return STACK[top];
}
