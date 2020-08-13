#include<stdio.h>
#pragma warning (disable: 4996) 

int main(void) {
	char cName[10];
	int nAge = 0;

	scanf("나이를 입력하세요. %d%*c", &nAge);
	printf("이름을 입력하세요. : ");
	gets(cName);

	printf("당신의 나이는 %d살이고 이름은 \'%s\'입니다.",nAge,cName);
	
	return 0;
}
/*/================================//
 p.088 - 03-01
//================================/*/