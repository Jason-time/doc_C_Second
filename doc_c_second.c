#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	int nResult = 0;

	//임시결과 7을 변수에 담아둔다.
	nResult = 3 + 4;
	//변수에 담아둔 정보를 다시 꺼내 연산한다.
	printf("nResult : %d\n", nResult - 5);
	return 0;
}
/*/================================//
 p.112 - operator02.c
//================================/*/