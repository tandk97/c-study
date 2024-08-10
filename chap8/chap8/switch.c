#include <stdio.h>

void main()
{
	int score = 86;
	char grade;
	switch (score / 10) {/*등급을 결정하는 점수가 10단위로 달라지기 때문에 10으로 나눈 몫을 활용하여 특정 숫자와 비교하도록 변경할 수 있다.*/
	case 10:/*break를 달지 않은 이유는 100을 10으로 나누면 몫이 10인데 9와 동일하게 처리하면 되기 때문이다.*/
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
	printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
}