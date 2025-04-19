/* 파일명: assignment02.c

 * 내용: 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오.

 * 작성자: 안민준

 * 날짜: 2025.04.19.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double assignment08(double r);

int main()
{
    double r = 0;
    double a = 0;

    printf("반지름의 길이? ");
    scanf("%lf", &r); 

    a = assignment08(r); 

    printf("구의 부피: %lf\n", a); 

    return 0;
}

double assignment08(double r)
{
    double sphere = (4.0 / 3.0) * 3.141592 * pow(r, 3); // 정확한 공식
    return sphere;
}

