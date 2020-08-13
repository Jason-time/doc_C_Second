#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	int nInput1 = 0;
	int nInput2 = 0;
	printf("두 정수를 입력하세요.: ");

	//사용자로부터 정수를 입력받는다.
	scanf("%d%d", &nInput1,&nInput2);
	
	//만일 사용자가 0을 입력한다면 10을 0으로 나눠야 한다.
	printf("AVG : %.2f\n", (nInput1+nInput2)/2.0 );
	return 0;
}
/*/================================//
 p.117 - 04-01.c
//================================/*/