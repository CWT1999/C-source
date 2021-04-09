#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() { 
	//포인터 : 메모리의 주소 값을 가리키는것 항상 4byte
	//int a = 10;
	//int *p = &a;

	//printf("a:%d / %p\n",a,&a);
	//printf("p:%p %d\n", p,*p);
	
	//char c = '$';
	//char *p2 = &c;
	//printf("%c\n", *p2);

	//double d = 3.14;
	//double *p3 = &d; //double이 써져있는 포인트는 가리키는 주소가 무슨형인지만 표시하는것 데이터값은 포인터는 무조건 4byte
	//printf("d:%f / %p\n", d, &d);
	//printf("%.2lf\n", *p3);

	//float lf = 5.55;
	//float* p4 = &lf;
	//printf("%.2f\n", *p4);

	// &? 해석할때 ?주소다 ex) p=&a는 a의 주소는 p다 
	//int a = 10, b = 20;
	//int *p = &a; //a의 주소는 p로 넘긴다 
	//printf("a:%d\n", *p);//p가 a의 주소를 갖고 있는데 *p가 나오면 a의 주소값과 똑같은 말이다 만약 p로 나왔으면 a에 주소가 나온다
	//p = &b;
	//printf("b:%d\n", *p);

	//실습) a=10, b=20, c=30일 때 base=100을 각 변수에 더해보시오
	//단 변수 a,b,c에 접근할때 포인터 변수 활용

	//1)풀이
	//int a = 10, b = 20, c = 30, base=100;
	//int *p = &a;
	//*p += base;
	//printf("%d\n", *p);
	//p = &b;
	//printf("%d\n", *p+base);
	//p = &c;
	//printf("%d\n", *p+base);


	//배열의 포인터
	//int arr[] = { 10,20,30 };
	//int* p = arr; //배열은 이름이 주소
	///*for (int i = 0; i < 3; i++) {
	//	printf("%d %d %d %d\n", *(p + i),*(arr+i),arr[i],p[i]);
	//}*/

	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d\n", *p++/**arr++ 불가*/);
	//	
	//}


	//실습) 문자형 배열에 'p','y','t','h','o','n'를 저장하고 포인터 변수를 이용하여 한글자씩 화면에 출력
	/*char arr[] = { 'p','y','t','h','o','n' };
	char* p = arr;
	for (int i = 0; i < 6; i++) {
		printf("%c\n", *p++);
	}*/



	//피보나치 수열 포인터를 사용해서 구하기
	int fibo[20];
	int* p = fibo;
	*p = 0; p++;								//p[0] = 0;
	*p = 1; p++;								//p[1] = 1;
	for (int i = 2; i < 20; i++) {
		*p = *(p -2) + *(p-1);		
		p++;								/*p[i + 2] = p[i + 1] + p[i];*/
	}
	p = fibo; //초기화 처음으로
	printf("20번째까지의 피보나치수열은:\n");
	for (int i = 0; i < 20; i++) {
		printf("%d\n", *p);		/*printf("%d\t", *p++);*/
		p++;
	}



	return 0;















	return 0;
}