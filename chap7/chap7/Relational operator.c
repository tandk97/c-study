#include <stdio.h>

void main()
{
	int data1 = 5, data2 = 3;

	int result1 = data1 > 7;/*5�� 7���� �����Ƿ� ����*/
	int result2 = data2 <= data1;/*3�� 5���� �����Ƿ� ��*/
	int result3 = data2 == 7;/*3�� 7�� ���� �����Ƿ� ����*/
	int result4 = data2 != data1;/*5�� 3�� ���� �����Ƿ� ��*/
	printf("result : %d, %d, %d, %d\n", result1, result2, result3, result4);
}