/*Code for Converting Infix To PostFix
 * Created By: SAURABH
 * Date :18/02/2024
 * Version:1.0
 * */
#include"myheader.h"
char Exp[MAX];
char STACK[MAX];
char PF[MAX];
int top=-1;
int main()
{
	char ch;
	printf("Enter the expresion: ");
	scanf("%s",Exp);
	Convert();
	/*while(Exp[i])
	{
		if(IsOpen(Exp[i]))
			PUSH(Exp[i]);
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
						ch=POP();
						PF[j++]=ch;
					//	PUSH(Exp[i]);
					}
				}
				if(f)
				PUSH(Exp[i]);
			}
		}
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
	if(top!=-1)
	{
		while((ch=POP())!=-1)
			PF[j++]=ch;
	}*/
	printf("%s\n",PF);
}
