#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "covid.h"

static int ci[7] = { 100, 120, 80, 70, 80, 60, 50 };

int mid() {	//평균값 구하는 함수
	int s = 0;

	for (int i = 0; i < 7; i++) {	//배열에 저장된 수의 합 출력(포인터)
		int* C;	
		C = ci;
		s += C[i];
	}

	printf("\n확진자의 평균값은 %d입니다.\n", s / 7);
	printf("\n------------------------------\n\n");
	printf("프로그램을 종료합니다.\n");
	
	return 0;
}
