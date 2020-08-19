#include<stdio.h>
#pragma warning (disable: 4996) 
#include<string.h>

int main(void) {

	char szBuffer[12] = { "TestString" };
	char* pszData = "TestString";

	//두 메모리에 저장된 값이 같은 경우
	printf("%d\n", memcmp(szBuffer, pszData, 10));

	//왼쪽("teststring")이 더 큰 경우
	printf("%d\n", memcmp("teststring", pszData, 10));

	//오른쪽(pszData)이 더 큰 경우
	printf("%d\n", memcmp("DataString", pszData, 10));
	return 0;
}

/*================================================
p.396 ptrmemcmp01.c  / 11.2.3 메모리 비교(memcmp(), strcmp()) 
==================================================/*/

