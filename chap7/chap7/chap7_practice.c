#include <stdio.h>

void main()
{
	int data1 = 5, data2 = 5, data3 = 5, data4 = 5, data5 = 5, data6 = 5, data7 = 5, data8 = 5, data9 = 5;
	int result1 = 0, result2 = 0, result3 = 0, result4 = 0, result5 = 0, result6 = 0, result7 = 0, result8 = 0, result9 = 0;

	result1 = data1 % 2;
	printf("result1, data1 = %d, %d\n", result1, data1);
	/*5를 2로 나누면 나머지가 1이 나오게 된다(1)*/
	result2 = data2 < 5;
	printf("result2, data2 = %d, %d\n", result2, data2);
	/*5는 5와 같으므로 거짓이다(0)*/
	result3 = data3 < 4 + 3;
	printf("result3, data3 = %d, %d\n", result3, data3);
	/*가감 연산자는 비교 연산자보다 우선순위가 높다 따라서 5<7이므로 참(1)*/
	result4 = data4++ + 2;
	printf("result4, data4 = %d, %d\n", result4, data4);
	/*후위형 증감 연산자는 연산을 하고 값을 증감한다 따라서 result는 7이고 data는 연산이 끝난 후 증가하여 6이 된다(7, 6)*/
	result5 = data5 == 5;
	printf("result5, data5 = %d, %d\n", result5, data5);
	/*5는 5와 같으므로 참이다 ==은 관계 연산자이고 값을 대입하지 않는다(1, 5)*/
	result6 = data6 != 5 && (data6 = 0);
	printf("result6, data6 = %d, %d\n", result6, data6);
	/*논리 연산자는 문장 분리자 처럼 작동하고 논리 연산자의 좌변을 먼저 계산 한 후 우변을 계산하고 마지막 우선순위의 대입 연산자를 실행한다*/
	/*data6은 5와 같으므로 거짓이다 AND연산자는 좌변이 참이면 우변을 계산하므로 우변은 계산되지 않는다(0, 5)*/
	result7 = --result7 && (data7 = 0);
	printf("result7, data7 = %d, %d\n", result7, data7);
	/*논리 연산자는 문장 분리자 처럼 작동하고 논리 연산자의 좌변을 먼저 계산 한 후 우변을 계산하고 마지막 우선순위의 대입 연산자를 실행한다*/
	/*전위형 증감 연산자는 값을 먼저 증감하고 다른 연산을 수행한다*/
	/*AND연산자의 좌변이 -1이므로 참값이 되어 우변을 계산하고 우변이 0이므로 최종 결과는 거짓이 된다(0, 0)*/
	result8 = result8-- && (data8 = 0);
	printf("result8, data8 = %d, %d\n", result8, data8);
	/*후위형 증감 연산자는 연산을 먼저 수행하고 자신의 값을 증감한다*/
	/*좌변의 값은 0으로 거짓이므로 AND연산자의 우변은 수행되지 않고 거짓으로 값이 나오게 된다(0, 5)*/
	result9 = result9-- || (data9 = 0);
	printf("result9, data9 = %d, %d\n", result9, data9);
	/*OR연산자이므로 좌변의 값이 거짓일 때 우변을 수행해봐야만 결과를 알 수 있다.*/
	/*좌변을 수행하면 0으로 거짓, 우변을 수행하면 또 거짓 이므로 최종 결과는 0이다(0, 0)*/
	//해답 참조 : https://blog.naver.com/friday_jina/221025351507
}