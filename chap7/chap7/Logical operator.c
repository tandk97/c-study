#include <stdio.h>

void main()
{
	int data1 = 5, data2 = 3;/*�� ������ �ʱⰪ�� ����*/

	int result1 = 0 || 1;/*OR������ ���� ����� 1*/
	int result2 = 3 && -1;/*AND������ ���� ����� 1*/
	int result3 = data1 == 3 || data2 == 3;/*OR������ data1�� ����, data2�� ���̹Ƿ� ���� ��� ����� 1*/
	int result4 = data1 == 3 && data2 == 3;/*AND������ data1�� �����̹Ƿ� data2�� �������� �ʰ� ���� �� ���� ��� ����� 0*/
	int result5 = !data1;/*���� ������ ��� ���� 0�Ǵ� 1 data1�� ���� �����ڿ��� ���̹Ƿ� ���� �����Ͽ� ���� ��� ���� 0*/
	printf("result : %d, %d, %d, %d, %d\n", result1, result2, result3, result4, result5);
}