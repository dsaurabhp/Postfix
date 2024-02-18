#include "myheader.h"
int PR(char ch)//priority for checking operator
{
	switch(ch)
	{
		case '*':return 2;
		case '/':return 2;
		case '^':return 3;
		case '+':return 1;
		case '-':return 1;
	}
}
int IsOpen(char ch)
{
	switch(ch)
	{
		case '(':
		case '{':
		case '[':
		case '<':
			return 1;
		default:
			return 0;
	}
}
int IsClose(char ch)
{
	switch(ch)
	{
		case ')':
		case '}':
		case ']':
		case '>':
			return 1;
		default:
			return 0;
	}
}
int IsOperator(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':
		case '*':
		case '^':
		case '/':
			return 1;
		default:
			return 0;
	}
}
int Match(char open,char close)
{
	switch(open)
	{
		case '(':if(close==')')
				 return 0;
			 return 1;
		case '{':if(close=='}')
				 return 0;
			 return 1;
		case '[':if(close==']')
				 return 0;
			 return 1;
		case '>':if(close=='<')
				 return 0;
			 return 1;
	}
}
