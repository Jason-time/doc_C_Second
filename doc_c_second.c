#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {
	
	int nInput = 0, nSelect = 0;
	scanf("%d", &nInput);

	//nInput <= 10 ? nSelect = 10 : nSelect=20 ; l-value 오류
	//printf("%d\n", nSelect);

	nInput <= 10 ? (nSelect = 10) : (nSelect=20) ;
	printf("%d\n", nSelect);

	return 0;
}
/*================================================
 p.164 - opcondierror01.c 5.4 조건 연산자(삼항 연산자)
==================================================/*/