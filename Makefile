balanced.exe:main.o Require.o Convert_POST.o STACK.o
	cc main.o Require.o Convert_POST.o STACK.o -o postfix.exe
main.o:main.c
	cc -c main.c
Require.o:Require.c
	cc -c Require.c
Convert_POST.o:Convert_POST.c
	cc -c Convert_POST.c
STACK.o:STACK.c
	cc -c STACK.c
