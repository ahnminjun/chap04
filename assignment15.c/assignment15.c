/* ���ϸ�: assignment15.c

 * ����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: �ȹ���

 * ��¥: 2025.04.19.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment15(double base_rate ,double preferential_rate);
//base_rate�� �Ÿű�����, preferenital_rate�� ȯ�������


int main()
{

	double base_rate = 0;
	double preferential_rate = 0;
	double dollar = 0;


	printf("��/�޷� �Ÿű�����? ");
	scanf("%lf", &base_rate);

	printf("ȯ�������(0~100%)? ");
	scanf("%lf", &preferential_rate);

	double rate = assignment15(base_rate, preferential_rate);

	printf("�޷� �� �� ȯ���� %lf�Դϴ�.\n", rate);

	printf("������ �޷�(USD)? ");
	scanf("%lf", &dollar);

	printf("USD %.2lf �� �� ==> KRW %.2lf", dollar, dollar * rate);

	return 0;


}

double assignment15(double base_rate, double preferential_rate)
{


	double exchange_rate = base_rate + (base_rate * 0.0175 * (1 - (preferential_rate / 100.0)));

	return exchange_rate;

}