﻿#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	// int 형식 변수 선언 및 정의
	int x = 10;
	//변수 x를 가리키는 int 형식에 대한 포인터 변수 선언 및 정의
	int* pnData = &x;

	printf("x : %d\n", x);

	//pnData 포인터 변수가 가리키는 대상 메모리를 int형 변수로
	//간접 지정하고 20을 대입한다.
	//현재 가리키는 대상 메모리는 변수 x의 메모리이므로 x의 값이 20이 된다. 
	*pnData = 20;
	printf("x : %d\n", x);
	printf("%s\n", "nData");

	return 0;

}

/*================================================
p.374 pointer02.c / 간접 지정 연산자.
==================================================/*/

