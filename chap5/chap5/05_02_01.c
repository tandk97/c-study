#include <stdio.h>

int Sum(int value1, int value2) {
	int result = value1 + value2;
	return result;
}

void main() {
	int s, t;
	s = Sum(2, 3);
	t = Sum(4, 5);/*1������*/
	printf("���ϱ� �۾��� ����� %d\n", s);
	printf("���ϱ� �۾��� ����� %d\n", t);/*1������*/
}