#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int aList[3][4] = {
		{10,20,30},
		{40,50,60}
	};
	int i = 0, j = 0;

	//여기에 들어갈 코드를 작성합니다.
	for (i = 0;i < 2;i++)
		for (j = 0;j < 3;j++)
			aList[i][3] += aList[i][j];

	for (j = 0;j < 4;j++)
		for (i = 0;i < 2;i++)
			aList[2][j] += aList[i][j];

	for (i = 0;i < 3;++i) {
		for (j = 0;j < 4;++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}
	return 0;
}

/*================================================
 p.282 08-03 / 2차원 배열의 행과 열의 총합 계산하기
==================================================/*/

