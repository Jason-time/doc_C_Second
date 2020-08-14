#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int nInput = 0,nMax=0;

	scanf("%d", &nInput);
	if (nMax < nInput)
		nMax = nInput;

	scanf("%d", &nInput);
	if (nMax < nInput)
		nMax = nInput;

	scanf("%d", &nInput);
	if (nMax < nInput)
		nMax = nInput;

	printf("MAX : %d", nMax);
	return 0;
}
/*================================================
 p.186 - 	6.1 if문을 이용한 최댓값 구하기
==================================================/*/