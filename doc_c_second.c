#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {
	int nMax = 0;
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	nMax = a > b ? a : b>c?b:c;

	printf("MAX : %d\n", nMax);
	return 0;
}
/*================================================
 p.168 - 세 정수 중에서 가장 큰 수 구하기
==================================================/*/