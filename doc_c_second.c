#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int nInput=-1;

	while (nInput < 0 || nInput > 10)
	{
		printf("Input number : ");
	scanf("%d", &nInput);
	}
	puts("END");

	return 0;
}
/*================================================
 p.242 07-07 피라미드 출력하기
==================================================/*/

