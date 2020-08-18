#include<stdio.h>
#pragma warning (disable: 4996) 
int GetData(void){
	int nInput = 0;
	printf("숫자를 입력하세요. : ");
	scanf("%d", &nInput);
	return nInput;
}

int GetMax(int a,int b, int c){
	int nMax = a;
	if (b > nMax)	nMax = b;
	if (c > nMax)	nMax = c;
	return nMax;
}

void PrintData(int a, int b, int c, int nMax) {
	printf("%d, %d, %d, 중 가장 큰 수는 %d 입니다.\n", a, b, c, nMax);
}
int main(void) {

	int aList[3] = { 0 };
	int nMax  = -9999, i = 0;
	//입력
	for (i = 0;i < 3;++i)
		aList[i] = GetData();

	//최대값 계산
	nMax = GetMax(aList[0], aList[1], aList[2]);

	//출력
	PrintData(aList[0], aList[1], aList[2], nMax);

	return 0;

}

/*================================================
p.347 10-01 / 사용자가 입력한 값에서 최댓값 구하기와 코드 분할
==================================================/*/

