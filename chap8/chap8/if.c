#include <stdio.h>

void main()
{
	/*���� ��ɹ�*/
	int data1 = 5;
	if (data1 > 3)printf("data�� 3���� ū �� �Դϴ�.\n");
	printf("���� ��ɹ� �۾� ����\n");

	/*���� ��ɹ�*/
	int score = 92;
	char grade;
	if (score >= 90) {
		grade = 'A';
		printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
	}
	printf("���� ��ɹ� �۾� ����\n");
}