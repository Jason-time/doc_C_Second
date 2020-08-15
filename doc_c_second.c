#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {
	int nInput1 = 0, nInput2 = 0;
	scanf("%d", &nInput1);
	if (nInput1 > 9 || nInput1 < 2)
		puts("ERROR");
	else {
	while (nInput2 < 9) {
		printf("%d * %d = %d\n", 
			nInput1, ++nInput2, nInput1 * nInput2);
		}
	}
	return 0;
}
/*================================================
 p.237 07-04 구구단에서 한 단만 출력하기
==================================================/*/

