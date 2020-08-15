#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int aList[5] = { 30,40,10,50,20 };
	int i = 0;

	//여기에 들어갈 코드를 작성합니다.
	for (i = 1; i < 5;i++) {
		if (aList[0] < aList[i])
			aList[0] = aList[i];
	}
	//이하 코드는 수정하지 않습니다.
	for (i = 0;i < 5;++i)
		printf("%d\t", aList[i]);
	putchar('\n');

	printf("MAX: %d\n", aList[0]);
	return 0;
}
/*================================================
 p.272 08-01 배열에서 최댓값 구하기
==================================================/*/

