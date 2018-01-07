#include <stdio.h>
#include <stdlib.h>

void main() 
{
	printf("naver.com\n");
	printf("naver.\rcom\n");

	//\t는 캐럿을 8칸이동
	printf("123456781234657812345678\n");
	printf("a\tbc\tdef\tg\n");
	//\b는 캐럿을 한칸 앞으로 이동
	printf("1234567\n");
	printf("\b");



	//debug 시 화면 멈춤
	getchar();//enter가 들어올 때까지 wait
}
