#include <stdio.h>

void main()
{
	int data1 = 5, data2 = 3;/*두 변수에 초기값을 설정*/

	int result1 = 0 || 1;/*OR연산자 예상 결과는 1*/
	int result2 = 3 && -1;/*AND연산자 예상 결과는 1*/
	int result3 = data1 == 3 || data2 == 3;/*OR연산자 data1은 거짓, data2는 참이므로 예상 출력 결과는 1*/
	int result4 = data1 == 3 && data2 == 3;/*AND연산자 data1은 거짓이므로 data2를 연산하지 않고 연산 끝 예상 출력 결과는 0*/
	int result5 = !data1;/*관계 연산의 결과 값은 0또는 1 data1은 논리 연산자에선 참이므로 논리 부정하여 예상 결과 값은 0*/
	printf("result : %d, %d, %d, %d, %d\n", result1, result2, result3, result4, result5);
}