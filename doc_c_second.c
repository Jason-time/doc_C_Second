﻿#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	int x = 10;
	//int * int -> %d
	printf("%d\n", x * 10);
	//int * double -> %d (출력 불가능)
	printf("%d\n", x * 10.0);

	//int / int는 int 형식이다. 실수 형식이 아니라는 저에 주의!
	//단, 소수점 이하는 절사된다.
	printf("%d\n", x / 10);

	//int / int 는 int 형식이므로 %f로 출력할 수 없다.
	printf("%d\n", 5 / 2);
	//소수점 이하가 절사되므로 사실상 정수 2를 %f로 출력하는 것이다.
	printf("%f\n", 5 / 2);

	//double / int 는 double 형식이다.
	printf("%f\n", 5.0 / 2);
	return 0;
}
/*/================================//
 p.114 - opdoubleint02.c
//================================/*/