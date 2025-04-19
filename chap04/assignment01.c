/* 파일명: assignment01.c

 * 내용: 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오.
 * 질량은 kg단위, 속력은 m/s 단위로 입력받는다.

 * 작성자: 안민준

 * 날짜: 2025.04.19.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment01(double mass, double speed);



int main()
{
	double mass = 0;

	double speed = 0;

	printf("질량(kg)? ");
	scanf("%lf", &mass);

	printf("속력(m/s)? ");
	scanf("%lf", &speed);

	double _energy = assignment01(mass, speed);

	printf("운동에너지: %.2lf J\n", _energy);

	return 0;
}

double assignment01(double mass, double speed)
{
	double energy = 0.5 * mass * speed * speed;

	return energy;

}