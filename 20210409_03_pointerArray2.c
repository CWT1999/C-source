#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	//�����迭�� ������
	//int arr[][3] = {{1,2,3},{4,5,6}};//���� ���� ����
	//int* p = arr; 
	//for (int i = 0; i < 6; i++) {
	//	printf("%d\n", *p++); //�ּ� 4byte�� �̵�
	//}

	// �θ� �л��� ������ ������ �迭��
	int sum = 0;
	double avg;
	int score[][3] = { {90,86,77},{89,99,88} };
	int(*p)[3] = score; //3X4byte �ǳʶڴ� �׷� 89 int score[1][0]
	
	for (int i = 0; i < 2; i++) {
		sum = (*p)[0]+ (*p)[1]+ (*p)[2];
		avg = sum / 3.;
		
		printf("�հ�:%d ���%.2lf\n",sum,avg );
		p++; 
	}
	printf("%p %p\n", p, p + 1);  //�ΰ��� 12byte ���̳��� 

	



	return 0;
}