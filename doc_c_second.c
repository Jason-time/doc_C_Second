#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {
	int nInput, nTotal;
	nTotal = 0;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf("Total : %d\n", nTotal);
	return 0;
}
/*/================================//
 p.129 - 세 정수의 누적 및 출력
//================================/*/