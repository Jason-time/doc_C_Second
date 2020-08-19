﻿#include<stdio.h>
#pragma warning (disable: 4996) 
#include<string.h>

int main(void) {

	// 문자 배열(char[16])의 선언 및 정의
	// 선언한 크기는 char[16]이지만 초기화는 char[6] 문자열로 한다.

	char szBuffer[16] = { "Hello" };

	//문자 배열을 가리키는 문자 포인터 변수의 선언 및 정의
	char* pszData = szBuffer;
	int nLength = 0;

	//pszData 포인터 변수가 가리키는 대상에 저장된 char형 데이터가
	//문자열의 끝을 의미하는 NULL문자가 될 때까지 반복문 수행
	while (*pszData != '\0') {

		//포인터를 다음으로 한 칸 이동 시킨다!!
		pszData++;
		nLength++;
	}

	//strlen() 함수로 문자열의 길이(바이트 단위 크기)를 출력한다.
	printf("Length : %d\n", nLength);
	printf("Length : %d\n", strlen(szBuffer));
	printf("Length : %d\n", strlen("world"));
	return 0;

}

/*================================================
p.379 ptrstring01.c  
==================================================/*/

