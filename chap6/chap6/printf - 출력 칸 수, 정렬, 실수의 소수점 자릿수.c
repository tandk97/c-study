#include <stdio.h>

void main()
{
	int data = 7;
	printf("[%d][%5d]\n", data, data);/*자릿 수 확인을 위해 []문자를 사용*/
	printf("[%5d][%05d][%-5d]\n", data, data, data);/*%5d는 오른쪽 정렬, %-5d는 왼쪽 정렬, 0은 안에 공백을 0으로 채움*/

	double value = 3.141592;
	printf("[%f][%.4f][%8.4f][%-8.4f][%08.4f][%-08.4f]", value, value, value, value, value, value);/*왼쪽 정렬의 경우 공백에 0이 채워지지 않음*/
}