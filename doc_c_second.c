#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	char szBufferLeft[32] = { 0 };
	char szBufferRight[32] = { 0 };

	scanf("%s%s", szBufferLeft, szBufferRight);
	printf("%s %s\n", szBufferLeft, szBufferRight);

	return 0;
}
/*/================================//
 p.096 - scanfstring02.c
//================================/*/