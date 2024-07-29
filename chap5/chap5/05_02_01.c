#include <stdio.h>

int Sum(int value1, int value2) {
	int result = value1 + value2;
	return result;
}

void main() {
	int s, t;
	s = Sum(2, 3);
	t = Sum(4, 5);/*1분퀴즈*/
	printf("더하기 작업의 결과는 %d\n", s);
	printf("더하기 작업의 결과는 %d\n", t);/*1분퀴즈*/
}