#include <stdio.h>

void main()
{
	int data = 5;
	if (data > 3)printf("data는 3보다 큰 수 입니다.\n");
	else printf("data는 3보다 작거나 같은 수 입니다.\n");
	printf("단일 명령문 작업 종료\n");

	int score;
	char grade;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);/*scanf함수는 사용자에게 입력 받은 값을 score 변수에 저장함 scanf함수의 반환값이 적혀있지 않다는 오류를 해결하기 위해 _s붙임*/
	if (score >= 90) {
		grade = 'A';
		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
	}
	else {
		grade = 'B';
		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
	}
	printf("복합 명령문 작업 종료\n");

	int value = 50000;
	double point1;
	double point2;
	/*if~else문*/
	if (value >= 10000)point1 = value * 0.1;
	else point1 = value * 0.05;
	/*조건 수식 연산자*/
	point2 = (value >= 10000) ? value * 0.1 : value * 0.05;
	printf("값은 %lf이고 %lf이다.", point1, point2);
}