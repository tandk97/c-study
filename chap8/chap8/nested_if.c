#include <stdio.h>

void main()
{
	int year = 2023, month = 12, day = 31;/*���� ��¥*/
	day++;/*�Ϸ簡 ������*/

	if (day > 31) {/*�޷¿��� ���� 31�̻��� ����*/
		month++;/*���� �޷� �Ѿ�� �Ѵ�*/
		day = 1;/*���� ���� �Ǹ� ���� 1���� �ȴ�*/
		if (month > 12) {/*�޷¿��� 12�� ���δ� ����*/
			year++;/*12���� ������ �⵵�� �޶�����*/
			month = 1;/*������ �Ǹ� 1���� �ȴ�.*/
		}
	}
	printf("date : %d�� %d�� %d��\n", year, month, day);

	int score = 86;
	char grade;

	if (score >= 90) {
		grade = 'a';
	}
	else {
		if (score >= 80) {
			grade = 'b';
		}
		else {
			if (score >= 70) {
				grade = 'c';
			}
			else {
				grade = 'f';
			}
		}
	}
	printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
	/*�����ϴ�*/
	/*�߰�ȣ�� ���� ������� 1���� �ۿ� ���� ������ �����Ͽ� ǥ���� ����*/
	if (score >= 90)grade = 'a';
	else {
		if (score >= 80)grade = 'b';
		else {
			if (score >= 70)grade = 'c';
			else {
				if (score >= 60)grade = 'd';
				else grade = 'f';
			}
		}
	}
	printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
	/*if~else���� �ϳ��� �����̱� ������ �� ���� �������� ó�� �� ���� �ִ�.*/
	if (score >= 90)grade = 'a';
	else if (score >= 80)grade = 'b';
	else if (score >= 70)grade = 'c';
	else if (score >= 60)grade = 'd';
	else grade = 'f';
	printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
	/*���⿡ �ſ� ����ϰ� �ڵ带 �����ϱ⵵ ����.*/
}