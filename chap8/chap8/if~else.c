#include <stdio.h>

void main()
{
	int data = 5;
	if (data > 3)printf("data�� 3���� ū �� �Դϴ�.\n");
	else printf("data�� 3���� �۰ų� ���� �� �Դϴ�.\n");
	printf("���� ��ɹ� �۾� ����\n");

	int score;
	char grade;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score);/*scanf�Լ��� ����ڿ��� �Է� ���� ���� score ������ ������ scanf�Լ��� ��ȯ���� �������� �ʴٴ� ������ �ذ��ϱ� ���� _s����*/
	if (score >= 90) {
		grade = 'A';
		printf("������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
	}
	else {
		grade = 'B';
		printf("������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
	}
	printf("���� ��ɹ� �۾� ����\n");

	int value = 50000;
	double point1;
	double point2;
	/*if~else��*/
	if (value >= 10000)point1 = value * 0.1;
	else point1 = value * 0.05;
	/*���� ���� ������*/
	point2 = (value >= 10000) ? value * 0.1 : value * 0.05;
	printf("���� %lf�̰� %lf�̴�.", point1, point2);
}