#include <stdio.h>
#		include <stdlib.h>

void main()
{
	//putchar = put + character
	putchar(65);//65='A';
	putchar('A');
	//#define putchar(c) putc((c), std out) ����
	putc('a', stdout); //stdout : standard out (monitor)
	//puts : ���ڿ��� ����� �� ���.
	printf("\n");

	puts("Hi~, hellow!");

	getchar();
}