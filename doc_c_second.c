#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0;

	for (i = 0;i < 5;++i) {
		//짝수 행과 홀수 행을 구별한다.
		if (i % 2 == 0)
			//짝수 행
			for (j = 0;j < 5;++j)
				//순방향으로 행을 채운다.
				aList[i][j] = ++nCounter;
		else
			//홀수 행
			for (j = 0;j < 5;++j)
				//마치 보수를 취하듯 역방향 인덱스를 계산한다.
				aList[i][4-j] = ++nCounter;
	}

	for (i = 0; i < 5;i++) {
		for (j = 0; j < 5; ++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}

	return 0;
}

/*================================================
 p.309 arraycross02.c 지그재그로 2차원 배열 채우기
==================================================/*/

