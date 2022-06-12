#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "covid.h"

int cal(int i) {

	char* w[] ={	//백신접종 위험구간(포인터 활용 - 포인터 배열)
		"백신 접종 시 고위험 구간입니다.\n",
		"백신 접종 시 적정 구간입니다.\n",
		"백신 접종 시 위험 구간입니다.\n"
	};
	

	printf("\n당신은 ");

	if (i < 20 || i >= 60)	printf("백신 접종 시 고위험군입니다.\n");	//나이별 위험구간 출력
	else if (i < 40) printf("백신 접종 적정 구간입니다.\n");
	else if (i < 60) printf("백신 접종 위험 구간 입니다.\n");

	printf("\n------------------------------\n\n");

	printf("프로그램을 종료합니다.\n");

	return 0;
} 
