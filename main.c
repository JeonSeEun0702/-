//202203075
//컴퓨터공학부
//전세은
//컴퓨터프로그래밍 과제
//코로나 관련 연령별 백신 위험률, 도시별 확진자 현황, 확진자 평균, 방역수칙

#define _CRT_SECURE_NO_WARNINGS	//scanf 오류방지
#include <stdio.h>
#include "covid.h"	//헤더파일(다중소스 파일)

static int ci[7] = { 100, 120, 80, 70, 80, 60, 50 }; //도시별 확진자 수(구조체 사용)
struct people {	//이름과 거주지, 나이(구조체 사용)
	char name[10];
	char address[10];
	int age;
};


int main() {
	int a,c; // 변수 a는 코로나 관련 현황

	printf("안녕하세요!\n");

	printf("이름과 거주지, 나이를 입력해주세요\n");
	struct people p;//구조체

	printf("이름 : ");
	scanf("%s", p.name);

	printf("거주지 : ");
	scanf("%s", p.address);

	printf("나이 : ");
	scanf("%d", &p.age);
	
	printf("안녕하세요! %s사는 %d살 %s님!\n", p.address, p.age, p.name); //구조체로 입력받은 값 출력

	printf("--------------------------------------------------------------------\n");
	printf("코로나 관련 현황입니다.\n");
	printf("1. 연령별 백신 위험률\n2. 2022년 도시별 확진자 현황\n3. 확진자 평균\n4. 방역수칙\n5. 프로그램 종료\n");
	printf("원하시는 항목의 번호를 입력해 주세요: ");
	scanf("%d", &a);	//코로나 관련 현황
	printf("--------------------------------------------------------------------\n");
	

	if (a == 1)
	{ 
		printf("\n1. 연령별 백신 위험률\n");
		cal(p.age);	//연령별 백신 위험률을 구하는 cal함수(함수 사용)
		
	}

	else if (a == 2)
	{
		printf("\n2. 2022년 도시별 확진자 현황\n");
		printf("\n2022년 도시별 확진자 현황입니다.\n");

		printf("1. 서울\n");
		printf("2. 경기도\n");
		printf("3. 경상도\n");
		printf("4. 전라도\n");
		printf("5. 강원도\n");
		printf("6. 충청도\n");
		printf("7. 제주도\n");
		printf("\n알아보실 도시를 선택해 주세요 : ");

		scanf("%d", &c);
		
		find(c);	//지역별 확진자 수를 찾아내는 find함수(함수 사용)
	}

	else if (a == 3) {
		printf("\n3. 확진자 평균\n");
		mid();	//평균값을 구하는 mid함수(함수 사용)
	}
	
	else if (a == 4) {
		printf("\n4. 방역수칙\n");
		printf("\n");
		cpy(1);	//메모장에 있는 방역수칙 출력하는 cpy함수(함수 사용)
	}

	else {
		printf("\n프로그램을 종료합니다.\n");
	}
}
