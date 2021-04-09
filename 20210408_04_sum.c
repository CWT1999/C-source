#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//매개변수로 정수를 입력받아 누적하는 함수
//int sum;
//int add(int a) {
//	//static 변수
//	//함수가 최초로 실행됬을때 생성, 프로그램 종료시 소멸 //그냥 지역변수는 함수 종료시 소멸
//	// 
//	//선언된 함수안에서만 접근 가능
//	static int sum = 0;
//	sum += a;
//}
//매개변수:없다
//리턴값:함수를 실행한 횟수
//함수이름 : counttest

int counttest(int a) {
	static int sum = 0;
	sum += 1;
	return sum;
}

int main() {
	// 전역변수, 지역변수 사용 예
	//printf("누적:%d\n",add(10));
	//printf("누적:%d\n", add(20));
	
	int a=0;
	for (int i = 0; i < 10; i++) {
		printf("%d\n", counttest(a));
	}











	return 0;
}