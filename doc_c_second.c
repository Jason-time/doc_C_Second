﻿#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	int x = 0, nResult = 0;

	//x의 값을 1 증가시킨 후 출력한다.
	++x;
	printf("%d\n", x);

	//x의 값을 1 증가시킨 후 출력한다.
	x++;
	printf("%d\n", x);

	//x의 값을 1 증가 시킨 후 단순 대입한다.(전위식 표기).
	nResult = ++x;
	printf("%d, %d\n", nResult, x);

	//x의 값을 nResult 에 대입한 후 x를 1 감소시킨다.(후위식 표기)
	nResult = x--;
	printf("%d, %d\n", nResult, x);

	return 0;
}
/*/================================//
 p.135 - opinc02.c 
//================================/*/