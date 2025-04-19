
/* 파일명: assignment17.c

32비트 크기의 데이터(부호 없는 정수형)에는  0~31번 비트가 존재한다.
7번째 비트만 1인 값, 15번째 비트만 1인 값,
23번째 비트만 1인 값, 31번째 비트만 1인 값을 구해서
16진수와 10진수로 출력하는 프로그램을 작성하시오

 * 작성자: 안민준
 * 날짜: 2025.04.19.
 * 버전: v1.0
 */

#include <stdio.h>

int assignment16(void);

int main()
{
    assignment16();
    return 0;
}

int assignment16(void)
{
    int a = 1 << 7;
    int b = 1 << 15;
    int c = 1 << 23;
    int d = 1 << 31;

    printf("7번 비트만 1인 값:%08X %d\n", a, a);
    printf("7번 비트만 1인 값:%08X %d\n", b, b);
    printf("7번 비트만 1인 값:%08X %d\n", c, c);
    printf("7번 비트만 1인 값:%08X %d\n", d, d);

    return 0;

}