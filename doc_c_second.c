#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	int nInput = 0, bResult = 0;

	scanf("%d", &nInput);
	//사용자가 입력한 값이 0이 아니면 참이다.
	//그러므로 사용자가 0을 입력하면 거짓이나, ! 연산으로 참이죠.
	bResult = !nInput;
	printf("Result : %d (1:True, 0:False)\n", bResult);

	return 0;
}
/*================================================
 p.159 - oplogicalnot01.c  
==================================================/*/