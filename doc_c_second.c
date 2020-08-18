#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#pragma warning (disable: 4996) 

// 나이를 매개변수로 받고 요금을 반환하는 기능을 제공
int  GetFee(int nAge) {
	int nFee = 1000;
	if (nAge < 20) nFee /= 2;

	return nFee;
}

//메뉴를 출력하고 사용자로부터 선택을 입력받는 인터페이스
int PrintMenu(void) {
	int nInput = 0;

	system("cls");
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
	nInput = getch();
	putch(nInput);
	nInput -= 48;
	putchar('\n');

	//scanf("%d", &nInput);;
	return nInput;
}
int GetAge(void) {
	int nAge = 0;
	printf("나이를 입력하세요. : ");
	scanf("%d", &nAge);
	return nAge;
}
int main(void) {
	int nMenu = 0, nAge = 0;

	//간단히 구현한 이벤트 루프
	while ((nMenu = PrintMenu()) != 0) {
		if (nMenu == 1) {
			nAge = GetAge();
			printf("요금은 %d원 입니다.", GetFee(nAge));

			_getch();
		}
	}
	puts("Bye~~!");
	return 0;

}

/*================================================
p.315 arraylookup01.c	/ 9.4 Lookup 배열
==================================================/*/

