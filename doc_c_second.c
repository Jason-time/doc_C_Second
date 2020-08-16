#include<stdio.h>
#pragma warning (disable: 4996) 

//정수 셋을 매개변수로 받고 최댓값을 반환하는 함수 선언 및 정의
int GetMax(int a, int b, int c) {

	//GetMax() 함수의 지역변수 선언 및 정의
	int nMax = a;
	if (b > nMax) nMax = b;
	if (c > nMax) nMax = c;
	return nMax;
}
int main(void) {
	int nResult = 0;
	//함수가 반환한 값을 %d 형식으로 출력한다.
	printf("MAX : %d\n", GetMax(1, 2, 3));

return 0;

}

/*================================================
p.333 function03.c	/ 10.1.2 반환 자료형
==================================================/*/

