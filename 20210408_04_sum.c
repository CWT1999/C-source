#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//�Ű������� ������ �Է¹޾� �����ϴ� �Լ�
//int sum;
//int add(int a) {
//	//static ����
//	//�Լ��� ���ʷ� ���������� ����, ���α׷� ����� �Ҹ� //�׳� ���������� �Լ� ����� �Ҹ�
//	// 
//	//����� �Լ��ȿ����� ���� ����
//	static int sum = 0;
//	sum += a;
//}
//�Ű�����:����
//���ϰ�:�Լ��� ������ Ƚ��
//�Լ��̸� : counttest

int counttest(int a) {
	static int sum = 0;
	sum += 1;
	return sum;
}

int main() {
	// ��������, �������� ��� ��
	//printf("����:%d\n",add(10));
	//printf("����:%d\n", add(20));
	
	int a=0;
	for (int i = 0; i < 10; i++) {
		printf("%d\n", counttest(a));
	}











	return 0;
}