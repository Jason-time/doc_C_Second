#include<stdio.h>
#pragma warning (disable: 4996) 
#include<stdlib.h>

int main(void) {

	int* pList = NULL, i = 0;

	//12바이트(sizeof(int)*3) 메모리를 동적 할당하고 시작 주소를
	//pList 포인터 변수에 저장

	pList = (int*)malloc(sizeof(int) * 3);

	//동적 할당한 대상 메모리를 배열 연산자로 접근한다.
	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;

	for (i = 0;i < 3;++i)
		printf("%d\n", pList[i]);

	//동적 할당한 메모리를 해제한다.
	free(pList);
	return 0;
}

/*================================================
p.385 ptrmalloc01.c / 11.2 메모리 동적 할당 및 관리 
==================================================/*/

