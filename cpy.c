#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "covid.h"

static int ci[7] = { 100, 120, 80, 70, 80, 60, 50 };

int cpy(int n) {	//방역수칙 보여주는 함수
	
		FILE* fp;	//방역수칙이 적혀 있는 텍스트 파일 covid19(파일 입출력)
		fp = fopen("covid19.txt", "r");
		for (int i = 0; i < 3; i++) {	//텍스트 파일에 적혀있는 줄만큼 출력
			char str[1000000];
			fgets(str, 1000000, fp);
			printf("%s", str);
		}
		printf("\n\n------------------------------\n\n");
		printf("프로그램을 종료합니다.\n");

		fclose(fp);	//텍스트 파일 닫기
		
		return 0;
	}
