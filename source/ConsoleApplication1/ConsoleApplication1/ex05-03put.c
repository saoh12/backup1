#include <stdio.h>
#		include <stdlib.h>

void main()
{
	//putchar = put + character
	putchar(65);//65='A';
	putchar('A');
	//#define putchar(c) putc((c), std out) 같음
	putc('a', stdout); //stdout : standard out (monitor)
	//puts : 문자열을 출력할 때 사용.
	printf("\n");

	puts("Hi~, hellow!");

	getchar();
}