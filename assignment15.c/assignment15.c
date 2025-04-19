/* 파일명: assignment15.c

 * 내용: 우리가 알고 있는 환율은 매매기준율이다. 실제 달러를 구입할 때는 매매기준율에 은행의 환전수수료를 더해서
 환율이 결정된다. 환전수수료는 환전우대율에 따라 달라진다. 환전수수료율은 은행마다 미리 정해지며, 환전우대율은 
 고객마다 다르게 책정된다. 환전수수료율은 1.75%로 정해져 있다고 가정하고 원~달러 매매기준율과 환전우대율을 입력받아서
 몇 원에 해당하는지 출력하는 프로그램을 작성하시오.

 * 작성자: 안민준

 * 날짜: 2025.04.19.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment15(double base_rate ,double preferential_rate);
//base_rate는 매매기준율, preferenital_rate는 환율우대율


int main()
{

	double base_rate = 0;
	double preferential_rate = 0;
	double dollar = 0;


	printf("원/달러 매매기준율? ");
	scanf("%lf", &base_rate);

	printf("환율우대율(0~100%)? ");
	scanf("%lf", &preferential_rate);

	double rate = assignment15(base_rate, preferential_rate);

	printf("달러 살 때 환율은 %lf입니다.\n", rate);

	printf("구입한 달러(USD)? ");
	scanf("%lf", &dollar);

	printf("USD %.2lf 살 때 ==> KRW %.2lf", dollar, dollar * rate);

	return 0;


}

double assignment15(double base_rate, double preferential_rate)
{


	double exchange_rate = base_rate + (base_rate * 0.0175 * (1 - (preferential_rate / 100.0)));

	return exchange_rate;

}
