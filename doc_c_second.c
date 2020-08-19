#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	int nData = 10;
	printf("%s\n", "nData");

	//변수 ndata에 들어 있는 값 출력
	printf("%d\n", nData);
	//변수 nData의 메모리 주소를 출력
	printf("0x%p\n", &nData);

	return 0;

}

/*================================================
p.370 pointer01.c / 주소 번지 연산자
==================================================/*/

