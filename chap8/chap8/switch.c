#include <stdio.h>

void main()
{
	int score = 86;
	char grade;
	switch (score / 10) {/*����� �����ϴ� ������ 10������ �޶����� ������ 10���� ���� ���� Ȱ���Ͽ� Ư�� ���ڿ� ���ϵ��� ������ �� �ִ�.*/
	case 10:/*break�� ���� ���� ������ 100�� 10���� ������ ���� 10�ε� 9�� �����ϰ� ó���ϸ� �Ǳ� �����̴�.*/
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
		break;
	}
	printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
}