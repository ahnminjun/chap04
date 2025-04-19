/* 파일명: assignment16.c

 * 내용: 컴퓨터 시스템에서 색상을 표현하는 방법 중에 RGB 표기법은 red, green, blue에 8비트씩을
 * 사용하여 색상을 표현하므로 24비트 트루컬러라고 한다. 컴퓨터 시스템에서는 32비트 데이터의
 * 최하위 바이트부터 red, green, blue 순서로 색상 정보를 저장하고 최상위 바이트를 사용하지 않고
 * 0으로 채운다. 0~255 사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB 색상을
 * 만들어서 출력하는 프로그램을 작성하시오. RGB 색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 
 * 16진수로 출력한다.

 * 작성자: 안민준

 * 날짜: 2025.04.19.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment16(int red, int green, int blue);

int main()
{
	//256을 오버플로우로 만들기 위해 char형을 사용
	unsigned char red = 0;
	unsigned char green = 0;
	unsigned char blue = 0;
	unsigned int a = 0;

	printf("red?: ");
	scanf("%d", &red);

	printf("green?: ");
	scanf("%d", &green);

	printf("blue?: ");
	scanf("%d", &blue);

	a = assignment16(red,green,blue);

	printf("RGB 트루컬러: %06X", a);

	return 0;

}

int assignment16(unsigned char red, unsigned char green, unsigned char blue)

{
	/* unsigned int move_red = red << 0;
	unsigned int move_green = green << 8;
	unsigned int move_blue = blue << 16;

	
	return move_red | move_green | move_blue;*/


	//red의 비트는 그대로, green의 비트를 8만큼 민다, blue의 비트는 16만큼 민다.
	// OR 연산자를 사용 한 이유는 0과 1 둘 중 하나만 1이여도 1을 반환하니
	// 값을 그대로 보존한 채 비트만 민 값을 구할 수 있다

	int RGB_Color = red | green << 8 | blue << 16;

	return RGB_Color;


}