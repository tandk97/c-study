#include <stdio.h>

void main()
{
	printf("65의 ASCII 값은 %c입니다.\n", 65);/*%c와 65가 짝을 이루기 때문에 65에 해당하는 아스키 값 A가 출력된다*/
	char data = 65;
	printf("%c의 ASCII 값은 %d입니다.", data, data);/*%c는 data 값을 아스키 값으로 인식하고, %d는 data값을 10진 정수로 인식한다.*/
}