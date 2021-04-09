#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//함수 :call by reference
//주소를 매개변수로 받는다  <int *p>
//1)
//int change(int *p) { //main에 포인터p를 받아서 형을 맞춰줘야한다
//	*p = 20; //p가 가리키는 값 =a에 값을 바꾼다
//	
//}

//2)
//void twoChange(int* p, int* q) {
//	int w;
//	w = *p;
//	*p = *q;
//	*q = w;
//}

//3)합계구하기
void sumCal(int *p, int *q) {
		*q += *p;


}


int main() {
	//함수에 포인터 넘기기
	//1)
	//int a=10;
	////int* p = &a;
	////change(p);
	//change(&a);
	//printf("%d", a);
	//scanf("%d", &a); // a의 주소에 있는 값을 바꾼다
	//
	//printf("a:%d", a);

	//2)
	//int a = 10, b = 20;

	//twoChange(&a, &b);

	//printf("%d %d\n", a, b);

	//3) 반복문을 이용해서 입력받은값을 누적
	//함수에서 누적
	int a, sum = 0;
	while (1) {
		printf("값을 입력하세요>>\n");
		scanf("%d", &a);
		sumCal(&a,&sum);
		if (a == 0) break;

	}

	printf("누적합계:%d\n",sum);






	return 0;
}