/* #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 int main(void)
{
	int number[3];
	int i, j, temp;
	for (i = 0; i < 3; i++)			// number �迭�� �� ���� �Է¹޴� �ݺ���
	{
		scanf("%d", &number[i]);
	}
	for (i = 0; i < 2; i++)		    // number �迭���� ���� ���Ͽ� ������������ ����
		for (j = 1; j < 3; j++)
		{
			if (number[i] > number[j])
			{
				temp = number[j];
				number[j] = number[i];
				number[i] = temp;
			}
		}
	for (i = 0; i < 3; i++)			// number �迭���� ��� ���
	{
		printf("%d ", number[i]);
	}

	return 0;
} 
int main(void)
{
	int a, b, c, temp;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		temp = a; a = b; b = temp; // temp�� a�� ����, a,b�� �ٲ�
	}
	if (b > c) {
		temp = b; b = c; c = temp; // temp�� b�� ����, b,c �� �ٲ�
	}
	if (a > b) {
		temp = a; a = b; b = temp; // temp�� a�� ����, a,b �� �ٲ�
	}		

	printf("%d %d %d", a, b, c);
} */