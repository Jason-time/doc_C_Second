#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int nMax=-100, nInput = 0;

	scanf("%d", &nInput);

	nMax = nInput > nMax ?  nInput : nMax;

	scanf("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	scanf("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	printf("MAX : %d\n", nMax);
	return 0;
}
/*================================================
 p.171 - 세 정수 중에서 가장 큰 수 구하기(서바이벌 방식)
==================================================/*/