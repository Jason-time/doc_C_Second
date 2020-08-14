#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int nFee= 1000;
	int nAge = 0;
	double nRate = 0.0;
	scanf("%d", &nAge);

	if(nAge<=19)
	{
		nRate = 0.25;
		if (nAge>=4 && nAge<=13)nRate = 0.5;
		else if(nAge<4)
			nRate = 1.0;
	}
	else {
		if (nAge >= 20 && nAge<65) nRate = 0.0;
		else nRate = 1.0;
	}

	printf("최종요금 : %.0f원", nFee-nFee*nRate);
	return 0;
}
/*================================================
 p.204 - 단계별 분류에 따른 버스요금 계산
==================================================/*/