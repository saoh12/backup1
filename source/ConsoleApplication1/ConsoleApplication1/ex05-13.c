#include <stdio.h>
#include <stdlib.h>

void main()
{
	int y = 0,
		m = 0,
		d = 0;
	printf("�¾ �ؿ� �� �⵵�� �Է����ּ���\n");
	scanf("%d.%d.%d", &y, &m, &d);
	printf("input year: %d\n input month: %d\n input date: %d\n your birthday is %d.%d.%d\n", y, m, d, y, m, d);
	system("pause");
}