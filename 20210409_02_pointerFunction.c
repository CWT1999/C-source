#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//�Լ� :call by reference
//�ּҸ� �Ű������� �޴´�  <int *p>
//1)
//int change(int *p) { //main�� ������p�� �޾Ƽ� ���� ��������Ѵ�
//	*p = 20; //p�� ����Ű�� �� =a�� ���� �ٲ۴�
//	
//}

//2)
//void twoChange(int* p, int* q) {
//	int w;
//	w = *p;
//	*p = *q;
//	*q = w;
//}

//3)�հ豸�ϱ�
void sumCal(int *p, int *q) {
		*q += *p;


}


int main() {
	//�Լ��� ������ �ѱ��
	//1)
	//int a=10;
	////int* p = &a;
	////change(p);
	//change(&a);
	//printf("%d", a);
	//scanf("%d", &a); // a�� �ּҿ� �ִ� ���� �ٲ۴�
	//
	//printf("a:%d", a);

	//2)
	//int a = 10, b = 20;

	//twoChange(&a, &b);

	//printf("%d %d\n", a, b);

	//3) �ݺ����� �̿��ؼ� �Է¹������� ����
	//�Լ����� ����
	int a, sum = 0;
	while (1) {
		printf("���� �Է��ϼ���>>\n");
		scanf("%d", &a);
		sumCal(&a,&sum);
		if (a == 0) break;

	}

	printf("�����հ�:%d\n",sum);






	return 0;
}