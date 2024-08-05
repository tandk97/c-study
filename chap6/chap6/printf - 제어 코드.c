#include <stdio.h>

void main()
{
	printf("Hello~ Tipssoft.com\n");/*줄바꿈 키워드 \n*/
	printf("Hello~ Tipssoft.com\rHi~~~~\n");/*줄의 처음으로 이동 \r*/
	printf("12345678123456781234567812345678\n");/*탭 위치 이동을 확인하기 위해 8의 배수로 입력*/
	printf("a\tbc\tdef\tg\n");/*캐럿을 한 탭 만큼 이동 \t*/
	printf("1234567\b");/*back 캐럿을 한 칸 앞으로 이동 \b*/
	getch();/*\b 캐럿 위치 확인용*/
	printf("\n\"Hello\"");/*", ', %또는 \자체를 출력하기 위한 \활용 printf(""Hello"");로 쓰면 오류가 난다.*/
}