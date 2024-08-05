#include <stdio.h>

void main()
{
	putchar('H');/*putchar함수는 1바이트를 기준으로 출력하기 때문에 한 글자에 2바이트인 한글은 출력 할 수 없다.*/
	putchar('i');
	putchar('~');
	putchar('가');/*콘솔 창에서 ?로 출력 됨을 확인*/
}