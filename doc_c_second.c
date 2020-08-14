#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int  nIndex = 0;

	//nIndex 변수는 반복조건에 직접 영향을 준다.
	while (nIndex >= 0) {
		//반복구간 내부 연산을 수행하더라도 nIndex는 
		//달라지지 않는다. 따라서 반복이 끝날 수 없다.
		nIndex++;
	}

	printf("%d\n", nIndex);
	return 0;
}
/*================================================
 p.227 - ctrlendless02.c / 7.1.2 무한루프
==================================================/*/

