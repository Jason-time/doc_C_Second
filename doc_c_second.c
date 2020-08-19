#include<stdio.h>
#pragma warning (disable: 4996) 
#include<string.h>

int main(void) {

	char szBuffer[32] = { "I am a boy." };

	//배열의 주소를 출력한다.
	printf("%p\n", szBuffer);

	//대상 문자열에서 문자열을 검색하고 찾은 위치(주소)를 출력한다.
	printf("%p\n", strstr(szBuffer, "am"));
	printf("%p\n", strstr(szBuffer, "boy"));

	//문자열이 검색된 위치에서 기준이 되는 주소를 빼면
	//인덱스를 계산할 수 있다. 
	printf("Index: %d\n", strstr(szBuffer, "am") - szBuffer);
	printf("Index: %d\n", strstr(szBuffer, "boy") - szBuffer);
	return 0;
}

/*================================================
p.401 ptrsearch01.c  / 11.2.4 문자열 검색 
==================================================/*/

