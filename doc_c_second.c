#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	char sszName[32] = { 0 };
	int nAge = 0;

	//사용자로부터 정수를 입력받아 nAge 변수에 저장한다.
	printf("나이를 입력하세요.  : ");
	scanf("%d", &nAge);

	//이름 중간에 빈 공백이 있더라도 문제없이 입력할 수 있다. 
	printf("이름을 입력하세요. : ");
	gets(sszName);

	//이름과 나이를 출력한다.
	printf("%d, %s\n", nAge, sszName);

	return 0;
}
/*/================================//
 p.097 - scanfage01.c
//================================/*/