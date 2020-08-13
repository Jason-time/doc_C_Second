#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	int x = 0;
	scanf("%d", &x);

	//int / in 는 int이므로 소수점 이하는 버려지고 출력된다.
	printf("3으로 나눈 몫 : %d\n", x / 3);
	//몫은 버리고 나머지(int)만 출력한다.
	printf("3으로 나눈 나머지 : %d\n", x % 3);
	return 0;
}
/*/================================//
 p.117 - operator04.c
//================================/*/