/* 파일명: assignment02.c

 * 내용: 화씨 온도를 실수로 입력받아 섭씨 온도로 변환해서 출력하는
 * 프로그램을 작성하시오. 

 * 작성자: 안민준

 * 날짜: 2025.04.19.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment02(double Fahrenheit_temperature);

int main()
{
	double Fahrenheit_temperature = 0; //화씨온도

	double temperature = 0;

	printf("화씨온도? ");

	scanf("%lf",&Fahrenheit_temperature);

	temperature = assignment02(Fahrenheit_temperature);

	printf("%.2lf F = %.2lf C", Fahrenheit_temperature, temperature);

	return 0;

}

double assignment02(double Fahrenheit_temperature)
{
	double Celsius_temperature = (Fahrenheit_temperature - 32) * 5.0 / 9.0;

	return Celsius_temperature;


}