//#include <stdio.h>
//
//void main()
//{
//	/*while문은 시작 조건이나 조건 변화 수식이 다양하거나 수치로 정할 수 없는 상황이라면 while문을 사용하는 것이 for문에 비해 편리하다*/
//	/*아래 while문에서 num을 6으로 하면 종결 조건이 처음부터 거짓이므로 result에서 num은 6 sum은 0일 것이다. 바꿔서 확인 완료*/
//	int sum = 0, num = 1;/*시작 조건*/
//	while (num<=5)/*종결 조건*/
//	{
//		/*합산 하기 전에 sum값을 사용하여 num+sum=이라고 출력함*/
//		printf("num(%d) + sum(%d) = ", num, sum);
//		sum = sum + num;
//		num++;/*조건 변화 수식*/
//		printf("%d\n", sum);
//	}
//	printf("\nResult : num = %d sum = %d\n\n", num, sum);
//
//	int sumsum = 0, numnum = 1;/*시작 조건*/
//	do/*명령문을 수행 한 후 종결 조건을 체크 종결 조건이 거짓이더라도 최소 한번은 명령문을 수행하게 됨*/
//	{
//		printf("numnum(%d) + sumsum(%d) = ", numnum, sumsum);
//		sumsum = sumsum + numnum;
//		numnum++;/*조건 변화 수식*/
//		printf("%d\n", sumsum);
//	} while (numnum<=5);/*종결 조건*/
//	printf("\nResult : numnum = %d sumsum = %d\n\n", numnum, sumsum);
//
//	/*do while이 종결 조건을 나중에 확인함을 알기 위해 시작 조건을 6으로 변경 한번 수행하게 되면 numnumnum은 7 sumsumsum은 6이 될 것이다.*/
//	int sumsumsum = 0, numnumnum = 6;/*시작 조건*/
//	do/*명령문을 수행 한 후 종결 조건을 체크 종결 조건이 거짓이더라도 최소 한번은 명령문을 수행하게 됨*/
//	{
//		printf("numnumnum(%d) + sumsumsum(%d) = ", numnumnum, sumsumsum);
//		sumsumsum = sumsumsum + numnumnum;
//		numnumnum++;/*조건 변화 수식*/
//		printf("%d\n", sumsumsum);
//	} while (numnumnum <= 5);/*종결 조건*/
//	printf("\nResult : numnumnum = %d sumsumsum = %d\n\n", numnumnum, sumsumsum);
//
//	/*1분 퀴즈*/
//	/*Q. while문을 이용해서 안녕하세요를 10번 출력해 보세요*/
//	/*풀이*/
//	/*요소 분석 : 반복 - 10번, 명령문 - '안녕하세요' 출력*/
//	/*10번 반복하게 해줄 숫자 변수가 하나 필요하고 명령문을 printf함수로 안녕하세요를 출력하면 되겠다. 추가로 몇 번째 안녕하세요 인지도 표기하자*/
//	int count = 1;
//	while (count<=10)
//	{
//		printf("이것은 %d번째 안녕하세요\n", count);
//		count++;
//	}
//}