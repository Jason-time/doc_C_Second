#include<stdio.h>
#pragma warning (disable: 4996) 
int main(void) {

	int nStar = 0,i=0;
	for (i=0;i < 5;++i)
	{
		for (nStar = 0;nStar < 5+i;nStar++)
		{
			if (i + nStar >= 4) printf("\t*");
			else putchar('\t');
		}
		puts("");
	}

	return 0;
}
/*================================================
 p.241 07-06 두 번째 직각 삼각형 출력하기
==================================================/*/

