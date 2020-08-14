#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	int nInput = 0, bResult = 0;

	scanf("%d", &nInput);
	bResult = nInput < 4 || nInput >= 60;
	printf("Result : %d (1:True, 0:False)\n", bResult);

	return 0;
}
/*================================================
 p.155 - oplogical01.c 논리합(OR)과 논리곱(AND)
==================================================/*/