#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	int nInput = 0, bResult = 0;

	scanf("%d", &nInput);
	bResult =  3 < nInput < 20;
	printf("Result : %d (1:True, 0:False)\n", bResult);

	return 0;
}
/*================================================
 p.158 - oplogicalerror01.c  
==================================================/*/