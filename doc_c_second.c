#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	printf("%d\n", 300 == 299.99999f);
	printf("%d\n", 300 == 299.99999);
	
	printf("%d\n", 300 == 299.9999);
	printf("%d\n", 300 == 300.00001F);
	return 0;
}
/*=================================
 p.153 - oprelintfloat01.c sizeof 연산자
==================================/*/