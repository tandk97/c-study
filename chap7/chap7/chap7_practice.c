#include <stdio.h>

void main()
{
	int data1 = 5, data2 = 5, data3 = 5, data4 = 5, data5 = 5, data6 = 5, data7 = 5, data8 = 5, data9 = 5;
	int result1 = 0, result2 = 0, result3 = 0, result4 = 0, result5 = 0, result6 = 0, result7 = 0, result8 = 0, result9 = 0;

	result1 = data1 % 2;
	printf("result1, data1 = %d, %d\n", result1, data1);
	/*5�� 2�� ������ �������� 1�� ������ �ȴ�(1)*/
	result2 = data2 < 5;
	printf("result2, data2 = %d, %d\n", result2, data2);
	/*5�� 5�� �����Ƿ� �����̴�(0)*/
	result3 = data3 < 4 + 3;
	printf("result3, data3 = %d, %d\n", result3, data3);
	/*���� �����ڴ� �� �����ں��� �켱������ ���� ���� 5<7�̹Ƿ� ��(1)*/
	result4 = data4++ + 2;
	printf("result4, data4 = %d, %d\n", result4, data4);
	/*������ ���� �����ڴ� ������ �ϰ� ���� �����Ѵ� ���� result�� 7�̰� data�� ������ ���� �� �����Ͽ� 6�� �ȴ�(7, 6)*/
	result5 = data5 == 5;
	printf("result5, data5 = %d, %d\n", result5, data5);
	/*5�� 5�� �����Ƿ� ���̴� ==�� ���� �������̰� ���� �������� �ʴ´�(1, 5)*/
	result6 = data6 != 5 && (data6 = 0);
	printf("result6, data6 = %d, %d\n", result6, data6);
	/*�� �����ڴ� ���� �и��� ó�� �۵��ϰ� �� �������� �º��� ���� ��� �� �� �캯�� ����ϰ� ������ �켱������ ���� �����ڸ� �����Ѵ�*/
	/*data6�� 5�� �����Ƿ� �����̴� AND�����ڴ� �º��� ���̸� �캯�� ����ϹǷ� �캯�� ������ �ʴ´�(0, 5)*/
	result7 = --result7 && (data7 = 0);
	printf("result7, data7 = %d, %d\n", result7, data7);
	/*�� �����ڴ� ���� �и��� ó�� �۵��ϰ� �� �������� �º��� ���� ��� �� �� �캯�� ����ϰ� ������ �켱������ ���� �����ڸ� �����Ѵ�*/
	/*������ ���� �����ڴ� ���� ���� �����ϰ� �ٸ� ������ �����Ѵ�*/
	/*AND�������� �º��� -1�̹Ƿ� ������ �Ǿ� �캯�� ����ϰ� �캯�� 0�̹Ƿ� ���� ����� ������ �ȴ�(0, 0)*/
	result8 = result8-- && (data8 = 0);
	printf("result8, data8 = %d, %d\n", result8, data8);
	/*������ ���� �����ڴ� ������ ���� �����ϰ� �ڽ��� ���� �����Ѵ�*/
	/*�º��� ���� 0���� �����̹Ƿ� AND�������� �캯�� ������� �ʰ� �������� ���� ������ �ȴ�(0, 5)*/
	result9 = result9-- || (data9 = 0);
	printf("result9, data9 = %d, %d\n", result9, data9);
	/*OR�������̹Ƿ� �º��� ���� ������ �� �캯�� �����غ��߸� ����� �� �� �ִ�.*/
	/*�º��� �����ϸ� 0���� ����, �캯�� �����ϸ� �� ���� �̹Ƿ� ���� ����� 0�̴�(0, 0)*/
	//�ش� ���� : https://blog.naver.com/friday_jina/221025351507
}