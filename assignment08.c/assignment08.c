/* ���ϸ�: assignment02.c

 * ����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: �ȹ���

 * ��¥: 2025.04.19.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double assignment08(double r);

int main()
{
    double r = 0;
    double a = 0;

    printf("�������� ����? ");
    scanf("%lf", &r); 

    a = assignment08(r); 

    printf("���� ����: %lf\n", a); 

    return 0;
}

double assignment08(double r)
{
    double sphere = (4.0 / 3.0) * 3.141592 * pow(r, 3); // ��Ȯ�� ����
    return sphere;
}

