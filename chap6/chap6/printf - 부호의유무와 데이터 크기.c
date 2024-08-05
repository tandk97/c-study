#include <stdio.h>

void main()
{
	int data1 = -1;
	unsigned int data2 = 4294967295;
	printf("%d, %u, %d, %u\n", data1, data1, data2, data2);/*출력하려는 변수의 자료형과 관계없이 %키워드를 어떻게 사용하는지에 따라 출력하는 값이 달라진다.*/
	char data = -1;
	printf("%d, %u", data, data);/*%d와 %u가 어떤 크기의 정수가 오든지 4바이트 크기로 변환해 놓고 출력하기 때문에 값이 다르게 출력된다.*/
	/*따라서 char형의 -1이 부호가 없을 때 최댓값이 255가 아닌 4바이트 크기의 최댓값 4294967295가 출력된다.*/
}