﻿#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	int nAge = 0, nHeight = 0;

	printf("나이를 입력하세요. : ");
	scanf("%d", &nAge);
	printf("키를 입력하세요. : ");
	scanf("%d", &nHeight);
	//모든 논리 연산은 왼쪽에서 오른쪽으로 진행하지요.
	//만일 논리적으로 더 수행할 필요가 없다면
	//수행하지 않은 나머지 연산은 무시합니다.
	printf("결과 : %d (1:합격, 0:불합격)\n",
		nAge >= 20 && nAge <= 30 && nHeight >= 150);

	return 0;
}
/*================================================
 p.160 - opshortcircuit01.c 쇼트서킷 
==================================================/*/