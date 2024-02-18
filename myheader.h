#include<stdio.h>
#define MAX 50
int IsOpen(char);// function for check open paranthesis
int IsClose(char);// function for check close paranthesis
int Match(char,char);// check if open paranthesis match with close paranthesis or not
void PUSH(char);//PUSH operation
char POP(void);//POP operation
char PEEK(void);// PEEK operation
int IsOperator(char );//check for operator
int PR(char);//function for priority
void Convert(void);// function to convert into postfix
