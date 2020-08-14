#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int nCharge = 1000;
	int nAge = 0;
	double nRate = 0.0;
	scanf("%d", &nAge);

	if(nAge<14)
	{
		if (nAge < 4)nRate = 0;
		else
			nRate = 0.5;
	}
	else {
		if (nAge < 20) nRate = 0.75;
		else nRate = 1.0;
	}

	printf("최종요금 : %.0f원", nCharge*nRate);
	return 0;
}
/*================================================
 p.197 - 나이에 따른 분류 및 요금계산
==================================================/*/