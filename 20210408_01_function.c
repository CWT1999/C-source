#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//return�� �Լ� ����
//�Ű�����:����, ��ȯ��:����
void voidTest() {
	printf("void�Լ�\n");
}
//�Ű�����:�Ѱ�, ��ȯ��:����
void voidTest2(int a) { //voidTest2��� ������ � �Ű������� �޴´�  �׷��� a��� �̸��� ��Ʈ�� 4byte�ڸ��� ������
	printf("�Ű�����:%d\n", a);
}

void voidTest3(int a, int b) {
	printf("�μ��� ��:%d\n", a + b);
}

//�Ű�����:������ 
//�Լ�: ���� ���̸� ���
void circle(double r) {
	printf("���� ���̴� :%.2f\n", r * r * 3.14);
}

//�Ű����� :������(double)
//��ȯ��:����(double)
//���� ���̸� ���ؼ� ��ȯ�ϴ� �Լ�
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area; //area�� double ������ ��ȯ �޾Ƽ� areaReturn �տ� void���� double���� ��������Ѵ�
				//��ȯ���� �Ѱ�
}

//�� ������ �Է� �޾Ƽ� ���� ��ȯ�ϴ� �Լ�

int num(int a, int b, int c) {
	int sum = a + b + c;
	return sum;
}
//�ΰ��� ������ �Ű������� �޾Ƽ� �����Ǽ����� ��ȯ�ϴ� �Լ�


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
		printf("����");
		return 0;
	}
}
//������ �Լ�
int main() {
	//�Է°�(input) = �Ű�����
	//�Լ�
	//double i;
	//voidTest();
	//voidTest2(3); //voidTest2�� a�� 3�� �־ voidTest2�� ������ 
	//voidTest3(3, 4);
	//printf("������ �Է�>>");
	//scanf("%lf", &i);  //�ּҸ� �ѱ�� call by reference ���
	//circle(i);   //���� �Ѿ�� �Լ� : call by value ��� 
	//double r = 3.6;
	//double rValue = areaReturn(r); //rValue�� areaReturn���� return ���ִ� ���� ���� return �޴� ���� �´� ���� rValue�տ� �ۼ�
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
	
	//�� ���� �Ű������� �޾Ƽ� �μ� �� ū ���� ��ȯ�ϴ� �Լ�

	double a = 10;
	double b = 5;
	double c = i(a, b);
	printf("%.2lf", c);





	return 0;


}