#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {
	//nTemp는 '교환'을 위해 필요한 변수이다.
	int x = 10, y = 20, nTmp = 0;
	printf("Before: x(%d), y(%d)\n", x, y);

	//두 변수 x와 y에 저장된 값을 서로 교환한다. 
	nTmp = x;
	x = y;
	y = nTmp;

	//교환이 완료된 것을 확인하기 위해 출력한다.
	printf("After: x(%d), y(%d)", x, y);
	return 0;
}
/*/================================//
 p.123 - opswap1.c
//================================/*/