#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int aList[51][51] = { 0 };
	int x = -1, y = 0, nCounter = 0;
	int i = 0, j = 0, nLength = 9, nDirection = 1;
	int nInput = 0;
	scanf("%d", &nInput);
	nLength = nInput * 2 - 1;
	for (nLength = nLength; nLength > 0;nLength -= 2) {

		for (i = 0;i < nLength;++i) {

			if (i < nLength / 2 + 1)x += nDirection;
			else                    y += nDirection;

			aList[y][x] = ++nCounter;
		}
		nDirection = -nDirection;
	}

	for (i = 0;i < nInput;++i) {
		for (j = 0;j < nInput;++j) printf("%d\t", aList[i][j]);

		putchar('\n');
	}
	return 0;
}

/*================================================
 p.314 09-04 달팽이 배열 채우기
==================================================/*/

