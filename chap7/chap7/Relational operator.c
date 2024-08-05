#include <stdio.h>

void main()
{
	int data1 = 5, data2 = 3;

	int result1 = data1 > 7;/*5는 7보다 작으므로 거짓*/
	int result2 = data2 <= data1;/*3은 5보다 작으므로 참*/
	int result3 = data2 == 7;/*3은 7과 같지 않으므로 거짓*/
	int result4 = data2 != data1;/*5는 3과 같지 않으므로 참*/
	printf("result : %d, %d, %d, %d\n", result1, result2, result3, result4);
}