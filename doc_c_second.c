#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int nStar = 0,nLevel=0,i=0;
	for (i;i < 5;++i)
	{

		for (nStar = 0;nStar < i + 1;nStar++)
			printf("* ");
		puts("");
	}

	return 0;
}
/*================================================
 p.241 07-05 첫 번째 직각 삼각형 출력하기
==================================================/*/

