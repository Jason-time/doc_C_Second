#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {
	int nHeight = 0;
	printf("키를 입력하세용 : ");
	scanf_s("%d", &nHeight);
	nHeight >= 150 ? printf("결과 : 합격") : printf("결과 : 불합격");

	return 0;
}
/*================================================
 p.166 - 합격자와 불합격자를 분류하는 방법
==================================================/*/