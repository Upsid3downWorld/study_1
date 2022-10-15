#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 1;
	while (1)
	{
		int n0, n1, n2, n3, n4;
		scanf("%d", &n0);
		if (n0 == 0)
			break;
		n1 = 3 * n0;
		if (n1 % 2 == 0)
		{
			n2 = (n1 / 2);
			printf("%d. even ", i);
		}
		else
		{
			printf("%d. odd ", i);
			n2 = (n1 + 1) / 2;
		}
		n3 = 3 * n2;
		n4 = n3 / 9;
		printf("%d\n", n4);
		i++;
	}	
	return 0;
}