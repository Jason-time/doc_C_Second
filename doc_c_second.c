#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {

	int second = 0;
	scanf("%d", &second);

	printf("%d초는 %02d시간 %02d분 %02d초 입니다. ", second,
		second / 3600, (second % 3600) / 60, second % 60);
	return 0;
}
/*/================================//
 p.119 - 04-02.c
//================================/*/