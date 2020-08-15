#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int aList[5] = { 30,40,10,50,20 };
	int i = 0,nTmp=0;

	//여기에 들어갈 코드를 작성합니다.
	for (i = 1; i < 5;i++) {
		if (aList[0] > aList[i]) {
			nTmp = aList[i];
			aList[i] = aList[0];
			aList[0] = nTmp;
		}
	}
	//이하 코드는 수정하지 않습니다.
	for (i = 0;i < 5;++i)
		printf("%d\t", aList[i]);
	putchar('\n');

	printf("MIN: %d\n", aList[0]);
	return 0;
}
/*================================================
 p.273 08-02 요소의 값을 교환하는 방식으로 배열에서 최솟값 구하기
==================================================/*/

