//#include <stdio.h>
//
//void main()
//{
//	/*while���� ���� �����̳� ���� ��ȭ ������ �پ��ϰų� ��ġ�� ���� �� ���� ��Ȳ�̶�� while���� ����ϴ� ���� for���� ���� ���ϴ�*/
//	/*�Ʒ� while������ num�� 6���� �ϸ� ���� ������ ó������ �����̹Ƿ� result���� num�� 6 sum�� 0�� ���̴�. �ٲ㼭 Ȯ�� �Ϸ�*/
//	int sum = 0, num = 1;/*���� ����*/
//	while (num<=5)/*���� ����*/
//	{
//		/*�ջ� �ϱ� ���� sum���� ����Ͽ� num+sum=�̶�� �����*/
//		printf("num(%d) + sum(%d) = ", num, sum);
//		sum = sum + num;
//		num++;/*���� ��ȭ ����*/
//		printf("%d\n", sum);
//	}
//	printf("\nResult : num = %d sum = %d\n\n", num, sum);
//
//	int sumsum = 0, numnum = 1;/*���� ����*/
//	do/*��ɹ��� ���� �� �� ���� ������ üũ ���� ������ �����̴��� �ּ� �ѹ��� ��ɹ��� �����ϰ� ��*/
//	{
//		printf("numnum(%d) + sumsum(%d) = ", numnum, sumsum);
//		sumsum = sumsum + numnum;
//		numnum++;/*���� ��ȭ ����*/
//		printf("%d\n", sumsum);
//	} while (numnum<=5);/*���� ����*/
//	printf("\nResult : numnum = %d sumsum = %d\n\n", numnum, sumsum);
//
//	/*do while�� ���� ������ ���߿� Ȯ������ �˱� ���� ���� ������ 6���� ���� �ѹ� �����ϰ� �Ǹ� numnumnum�� 7 sumsumsum�� 6�� �� ���̴�.*/
//	int sumsumsum = 0, numnumnum = 6;/*���� ����*/
//	do/*��ɹ��� ���� �� �� ���� ������ üũ ���� ������ �����̴��� �ּ� �ѹ��� ��ɹ��� �����ϰ� ��*/
//	{
//		printf("numnumnum(%d) + sumsumsum(%d) = ", numnumnum, sumsumsum);
//		sumsumsum = sumsumsum + numnumnum;
//		numnumnum++;/*���� ��ȭ ����*/
//		printf("%d\n", sumsumsum);
//	} while (numnumnum <= 5);/*���� ����*/
//	printf("\nResult : numnumnum = %d sumsumsum = %d\n\n", numnumnum, sumsumsum);
//
//	/*1�� ����*/
//	/*Q. while���� �̿��ؼ� �ȳ��ϼ��並 10�� ����� ������*/
//	/*Ǯ��*/
//	/*��� �м� : �ݺ� - 10��, ��ɹ� - '�ȳ��ϼ���' ���*/
//	/*10�� �ݺ��ϰ� ���� ���� ������ �ϳ� �ʿ��ϰ� ��ɹ��� printf�Լ��� �ȳ��ϼ��並 ����ϸ� �ǰڴ�. �߰��� �� ��° �ȳ��ϼ��� ������ ǥ������*/
//	int count = 1;
//	while (count<=10)
//	{
//		printf("�̰��� %d��° �ȳ��ϼ���\n", count);
//		count++;
//	}
//}