#include <stdio.h>
#include <stdlib.h>

void main() 
{
	printf("naver.com\n");
	printf("naver.\rcom\n");

	//\t�� ĳ���� 8ĭ�̵�
	printf("123456781234657812345678\n");
	printf("a\tbc\tdef\tg\n");
	//\b�� ĳ���� ��ĭ ������ �̵�
	printf("1234567\n");
	printf("\b");



	//debug �� ȭ�� ����
	getchar();//enter�� ���� ������ wait
}
