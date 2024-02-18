#include "myheader.h"
extern char Exp[MAX];
extern char PF[MAX];
extern int top;
void Convert(void)
{
	int i=0,j=0;
	char ch;
	/* Traverse from left to right*/
	while(Exp[i])
	{
		/*if current element is
		 * open paranthesis
		 * PUSH into stack*/
		if(IsOpen(Exp[i]))
			PUSH(Exp[i]);
		/*else if current element
		 *is an operator push on
		 *the stack if any of the
		 *below condition is true*/
		else if(IsOperator(Exp[i]))
		{
			if(top==-1)
			{
				PUSH(Exp[i]);
			}
			else if(IsOpen(PEEK()))
			{
				PUSH(Exp[i]);
			}
			else if(IsOperator(PEEK()))
			{
				int f=0;
				if(top==-1)
					PUSH(Exp[i]);
				while((top!=-1)&&(!IsOpen(PEEK())))
				{
					if(PR(PEEK())<PR(Exp[i]))
					{
						PUSH(Exp[i]);
						f=0;
						break;
					}
					else
					{
						f=1;
						/*else pop the stack until any of 
						 *the above conditions becomes
						 true*/
						ch=POP();
						PF[j++]=ch;// pop data should be concantenate to post fix expression
					}
				}
				if(f)
					PUSH(Exp[i]);
			}
		}
		/*else if current element
		 *is closed braced pop from 
		 *the stack until we get equivalent
		 *open brace.
		 */
		else if(IsClose(Exp[i]))
		{
			if(top==-1)
			{
				printf("Invalid Expresion\n");
			}
			else
			{
				while(ch=POP())
				{
					if(!Match(ch,Exp[i]))
						break;
					PF[j++]=ch;
				}
			}
		}
		else
			PF[j++]=Exp[i];
		i++;
	}
	/*after terminating the loop POP the stack until
	 *it becomes empty and concantenate
	 *to postfix expression*/
	if(top!=-1)
	{
		while((ch=POP())!=-1)
			PF[j++]=ch;
	}
}
