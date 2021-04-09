#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	//이차배열의 포인터
	//int arr[][3] = {{1,2,3},{4,5,6}};//행은 생략 가능
	//int* p = arr; 
	//for (int i = 0; i < 6; i++) {
	//	printf("%d\n", *p++); //주소 4byte씩 이동
	//}

	// 두명 학생의 국영수 점수를 배열에
	int sum = 0;
	double avg;
	int score[][3] = { {90,86,77},{89,99,88} };
	int(*p)[3] = score; //3X4byte 건너뛴다 그럼 89 int score[1][0]
	
	for (int i = 0; i < 2; i++) {
		sum = (*p)[0]+ (*p)[1]+ (*p)[2];
		avg = sum / 3.;
		
		printf("합계:%d 평균%.2lf\n",sum,avg );
		p++; 
	}
	printf("%p %p\n", p, p + 1);  //두개가 12byte 차이난다 

	



	return 0;
}