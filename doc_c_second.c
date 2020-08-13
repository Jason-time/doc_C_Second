#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	int nData = 0x11223344;

	printf("%08X\n", nData & 0xFFFF0000);
	printf("%08X\n", nData & 0x00FFFF00);
	printf("%08X\n", nData & 0x0000FFFF);
	printf("%08X\n", nData & 0xFF0000FF);

	return 0;
}
/*/================================//
 p.140 - opmask01.c	마스크 연산
//================================/*/