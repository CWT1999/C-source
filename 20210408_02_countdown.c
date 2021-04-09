#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <Windows.h>

//int timer(int a) {
//	
//}


//매개변수:카운트다운 초
//반환값 : 없음
//카운트 다운을 출력
void timer(int i) {
	for (i; i >= 0; i--) {
		Sleep(1000); //1/1000초 단위
		printf("%d초\n", i);
	}
}


int main() {
	int i=5;
	//카운트다운 프로그램
	printf("카운트 다운 시작\n");
	timer(i);
	printf("발사");








	return 0;

}