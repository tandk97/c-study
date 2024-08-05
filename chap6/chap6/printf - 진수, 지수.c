#include <stdio.h>

void main()
{
	int data1 = 10;/*10진수 - 10진수로 10*/
	int data2 = 010;/*8진수 - 10진수로 8*/
	int data3 = 0x10;/*16진수 - 10진수로 16*/
	printf("%x, %d, %o\n", data1, data2, data3);/*16진수에서 대문자를 출력하고 싶으면 %X로 적으면 된다.*/
	float data = 12.34f;
	printf("%f, %e, %E", data, data, data);
}