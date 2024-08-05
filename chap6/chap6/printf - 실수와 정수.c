#include <stdio.h>

void main()
{
	float value = 2.1f;/*c언어는 실수형인 상수를 적으면 기본적으로 double 자료형으로 처리한다 float 자료형으로 변수를 선언하고 실수 형식의 상수를*/
	printf("%f\n", value);/*적으면 8바이트 크기의 double 값이 4바이트 크기의 float 공간에 저장되기 때문에 데이터가 손실될 수 있다는 경고가 발생한다.*/
	printf("%f, %d", value, value);/*실수 데이터를 정수 표현 키워드로 출력하면 엉뚱한 값(0xc0000000)이 출력된다.*/
}