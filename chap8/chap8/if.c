#include <stdio.h>

void main()
{
	/*단일 명령문*/
	int data1 = 5;
	if (data1 > 3)printf("data는 3보다 큰 수 입니다.\n");
	printf("단일 명령문 작업 종료\n");

	/*복합 명령문*/
	int score = 92;
	char grade;
	if (score >= 90) {
		grade = 'A';
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	}
	printf("복합 명령문 작업 종료\n");
}