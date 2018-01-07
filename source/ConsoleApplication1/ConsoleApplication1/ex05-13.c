#include <stdio.h>
#include <stdlib.h>

void main()
{
	int y = 0,
		m = 0,
		d = 0;
	printf("태어난 해와 월 년도를 입력해주세요\n");
	scanf("%d.%d.%d", &y, &m, &d);
	printf("input year: %d\n input month: %d\n input date: %d\n your birthday is %d.%d.%d\n", y, m, d, y, m, d);
	system("pause");
}