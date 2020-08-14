#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int nBasic = 1000;
	int nAge = 0;

	printf("나이를 입력하세요. : ");
	scanf("%d", &nAge);

	if (nAge < 20) {
		nBasic = 1000 - 1000 * 0.25;
	}
	printf("최종요금 : %d원", nBasic);
	return 0;
}
/*================================================
 p.187 - 06-02 버스 요금 계산 프로그램
==================================================/*/