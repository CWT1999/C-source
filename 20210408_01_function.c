#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//return은 함수 종료
//매개변수:없다, 반환값:없다
void voidTest() {
	printf("void함수\n");
}
//매개변서:한개, 반환값:없다
void voidTest2(int a) { //voidTest2라는 공간에 어떤 매개변수를 받는다  그래서 a라는 이름에 인트형 4byte자리를 마련함
	printf("매개변수:%d\n", a);
}

void voidTest3(int a, int b) {
	printf("두수의 합:%d\n", a + b);
}

//매개변수:반지름 
//함수: 원의 넓이를 출력
void circle(double r) {
	printf("원의 넓이는 :%.2f\n", r * r * 3.14);
}

//매개변수 :반지름(double)
//반환값:넓이(double)
//원의 넓이를 구해서 반환하는 함수
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area; //area가 double 형으로 반환 받아서 areaReturn 앞에 void말고 double형을 적어줘야한다
				//반환값은 한개
}

//세 정수를 입력 받아서 합을 반환하는 함수

int num(int a, int b, int c) {
	int sum = a + b + c;
	return sum;
}
//두개의 정수를 매개변수로 받아서 나눈실수값을 반환하는 함수


double d(int a, int b) {
	double q = (double)a / b;
	return q;
}

double i(double a, double b) {
	if (a > b) {
		return a;
	}
	else if (a < b) {
		return b;
	}
	else {
		printf("같다");
		return 0;
	}
}
//진입점 함수
int main() {
	//입력값(input) = 매개변수
	//함수
	//double i;
	//voidTest();
	//voidTest2(3); //voidTest2에 a에 3을 넣어서 voidTest2로 보낸다 
	//voidTest3(3, 4);
	//printf("반지름 입력>>");
	//scanf("%lf", &i);  //주소를 넘기면 call by reference 방식
	//circle(i);   //값이 넘어가는 함수 : call by value 방식 
	//double r = 3.6;
	//double rValue = areaReturn(r); //rValue에 areaReturn에서 return 해주는 값을 저장 return 받는 값에 맞는 형을 rValue앞에 작성
	//printf("%.2lf", rValue);

	//int a = 1;
	//int b = 2;
	//int c = 3;
	//
	//int sum2 = num(a, b, c);
	//printf("%d", sum2);
	
	//int a = 10;
	//int b = 6;
	//double c = d(a,b);
	//printf("%.2lf", c);
	
	//두 수를 매개변수로 받아서 두수 중 큰 수를 반환하는 함수

	double a = 10;
	double b = 5;
	double c = i(a, b);
	printf("%.2lf", c);





	return 0;


}