#include <stdio.h>

void main()
{
	int year = 2023, month = 12, day = 31;/*현재 날짜*/
	day++;/*하루가 지난다*/

	if (day > 31) {/*달력에서 날은 31이상이 없다*/
		month++;/*다음 달로 넘어가야 한다*/
		day = 1;/*다음 달이 되면 날은 1일이 된다*/
		if (month > 12) {/*달력에서 12월 위로는 없다*/
			year++;/*12월이 끝나면 년도가 달라진다*/
			month = 1;/*내년이 되면 1월이 된다.*/
		}
	}
	printf("date : %d년 %d월 %d일\n", year, month, day);

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
	printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	/*복잡하다*/
	/*중괄호로 묶은 문장들이 1개씩 밖에 없기 때문에 생략하여 표현해 보자*/
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
	printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	/*if~else문은 하나의 문법이기 때문에 한 개의 문장으로 처리 할 수도 있다.*/
	if (score >= 90)grade = 'a';
	else if (score >= 80)grade = 'b';
	else if (score >= 70)grade = 'c';
	else if (score >= 60)grade = 'd';
	else grade = 'f';
	printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
	/*보기에 매우 깔끔하고 코드를 이해하기도 좋다.*/
}