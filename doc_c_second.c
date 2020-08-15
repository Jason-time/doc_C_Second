#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {
	int nInput1 = 0, nInput2 = 0;

	while (nInput1 < 5) {
		nInput2 = 0;
		while (nInput2 < 5) {
			printf("*\t");
			nInput2++;
		}
		nInput1++;
		puts("\n");
	}
	return 0;
}
/*================================================
 p.234 - 5행 5열의 사각형 출력하기
==================================================/*/

