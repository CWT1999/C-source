#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <Windows.h>

//int timer(int a) {
//	
//}


//�Ű�����:ī��Ʈ�ٿ� ��
//��ȯ�� : ����
//ī��Ʈ �ٿ��� ���
void timer(int i) {
	for (i; i >= 0; i--) {
		Sleep(1000); //1/1000�� ����
		printf("%d��\n", i);
	}
}


int main() {
	int i=5;
	//ī��Ʈ�ٿ� ���α׷�
	printf("ī��Ʈ �ٿ� ����\n");
	timer(i);
	printf("�߻�");








	return 0;

}