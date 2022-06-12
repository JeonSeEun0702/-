#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "covid.h"

static int ci[7] = { 100, 120, 80, 70, 90, 60, 50 };		//지역별 확진자 수(배열)

int find(int c) {

	for (int i = 0; i < 7; i++) {
		if (ci[c - 1] == ci[i]) {			//배열 출력
			printf("\n확진자는 %d명입니다.\n", ci[c - 1]);
			printf("\n------------------------------\n\n");
		}
	}

	printf("프로그램을 종료합니다.\n");
	
	return 0;
}
