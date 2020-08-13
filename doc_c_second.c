#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {
	char szBuffer[32] = { 0 };

	//상수에 대입 연산을 수행할 수 없다. 
	3 = 4;
	//배열의 이름은 '주소상수'다. 변수가 아니다. 
	szBuffer = 'A';



	return 0;
}
/*/================================//
 p.121 - opassignconst01.c
//================================/*/