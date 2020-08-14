#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int nInput = 0;
	scanf("%d", &nInput);

	if (nInput < 1) nInput = 1;
	else if (nInput > 9) nInput = 9;

	while (nInput > 0) {
		putchar('*');
		nInput--;
	}
	putchar('\n');
	return 0;
}
/*================================================
 p.225 - 07-01 사용자가 입력한 숫자만큼 * 출력하기
==================================================/*/

