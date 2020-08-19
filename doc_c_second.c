#include<stdio.h>
#pragma warning (disable: 4996) 
#include<string.h>

int main(void) {

	char szBuffer[12] = { "HelloWorld" };
	char szNewBuffer[12] = { 0 };

	//원본에서 4바이ㅣ트만 대상 메모리로 복사
	memcpy(szNewBuffer, szBuffer, 4);
	puts(szNewBuffer);

	//원본에서 6바이트만 대상 메모리로 복사
	memcpy(szNewBuffer, szBuffer, 6);
	puts(szNewBuffer);

	//원본 메모리 전체를 대상 메모리로 복사
	memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
	puts(szNewBuffer);

	return 0;
}

/*================================================
p.392 ptrmemcpy01.c  / 11.2.2 메모리 복사
==================================================/*/

