#include <stdio.h>

void main()
{
	int data = 7;
	printf("[%d][%5d]\n", data, data);/*�ڸ� �� Ȯ���� ���� []���ڸ� ���*/
	printf("[%5d][%05d][%-5d]\n", data, data, data);/*%5d�� ������ ����, %-5d�� ���� ����, 0�� �ȿ� ������ 0���� ä��*/

	double value = 3.141592;
	printf("[%f][%.4f][%8.4f][%-8.4f][%08.4f][%-08.4f]", value, value, value, value, value, value);/*���� ������ ��� ���鿡 0�� ä������ ����*/
}