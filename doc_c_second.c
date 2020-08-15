#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {
	int nInput1 = 0, nInput2 = 0;

	while (nInput1 < 10) {
		nInput2 += ++nInput1;
	}
	printf("%d", nInput2);
	return 0;
}
/*================================================
 p.237 07-03 1에서 10까지의 총합 구하기 
==================================================/*/

