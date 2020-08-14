#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int nAge = 0;
	printf("나이를 입력하세요. : ");
	scanf("%d", &nAge);

	//if 문 시작 
	if (nAge >= 20)
		//조건식을 만족한 경우에만 실행하는 구문
		printf("당신의 나이는 %d세 입니다.\n", nAge);

	//if문 끝
	puts("End");
	return 0;
}
/*================================================
 p.183 - ctrlbranch01.c	6.1.1 기본 구조
==================================================/*/