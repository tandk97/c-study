#include <stdio.h>

void main()
{
	int data1 = 10;/*10���� - 10������ 10*/
	int data2 = 010;/*8���� - 10������ 8*/
	int data3 = 0x10;/*16���� - 10������ 16*/
	printf("%x, %d, %o\n", data1, data2, data3);/*16�������� �빮�ڸ� ����ϰ� ������ %X�� ������ �ȴ�.*/
	float data = 12.34f;
	printf("%f, %e, %E", data, data, data);
}