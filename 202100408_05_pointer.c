#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() { 
	//������ : �޸��� �ּ� ���� ����Ű�°� �׻� 4byte
	//int a = 10;
	//int *p = &a;

	//printf("a:%d / %p\n",a,&a);
	//printf("p:%p %d\n", p,*p);
	
	//char c = '$';
	//char *p2 = &c;
	//printf("%c\n", *p2);

	//double d = 3.14;
	//double *p3 = &d; //double�� �����ִ� ����Ʈ�� ����Ű�� �ּҰ� ������������ ǥ���ϴ°� �����Ͱ��� �����ʹ� ������ 4byte
	//printf("d:%f / %p\n", d, &d);
	//printf("%.2lf\n", *p3);

	//float lf = 5.55;
	//float* p4 = &lf;
	//printf("%.2f\n", *p4);

	// &? �ؼ��Ҷ� ?�ּҴ� ex) p=&a�� a�� �ּҴ� p�� 
	//int a = 10, b = 20;
	//int *p = &a; //a�� �ּҴ� p�� �ѱ�� 
	//printf("a:%d\n", *p);//p�� a�� �ּҸ� ���� �ִµ� *p�� ������ a�� �ּҰ��� �Ȱ��� ���̴� ���� p�� �������� a�� �ּҰ� ���´�
	//p = &b;
	//printf("b:%d\n", *p);

	//�ǽ�) a=10, b=20, c=30�� �� base=100�� �� ������ ���غ��ÿ�
	//�� ���� a,b,c�� �����Ҷ� ������ ���� Ȱ��

	//1)Ǯ��
	//int a = 10, b = 20, c = 30, base=100;
	//int *p = &a;
	//*p += base;
	//printf("%d\n", *p);
	//p = &b;
	//printf("%d\n", *p+base);
	//p = &c;
	//printf("%d\n", *p+base);


	//�迭�� ������
	//int arr[] = { 10,20,30 };
	//int* p = arr; //�迭�� �̸��� �ּ�
	///*for (int i = 0; i < 3; i++) {
	//	printf("%d %d %d %d\n", *(p + i),*(arr+i),arr[i],p[i]);
	//}*/

	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d\n", *p++/**arr++ �Ұ�*/);
	//	
	//}


	//�ǽ�) ������ �迭�� 'p','y','t','h','o','n'�� �����ϰ� ������ ������ �̿��Ͽ� �ѱ��ھ� ȭ�鿡 ���
	/*char arr[] = { 'p','y','t','h','o','n' };
	char* p = arr;
	for (int i = 0; i < 6; i++) {
		printf("%c\n", *p++);
	}*/



	//�Ǻ���ġ ���� �����͸� ����ؼ� ���ϱ�
	int fibo[20];
	int* p = fibo;
	*p = 0; p++;								//p[0] = 0;
	*p = 1; p++;								//p[1] = 1;
	for (int i = 2; i < 20; i++) {
		*p = *(p -2) + *(p-1);		
		p++;								/*p[i + 2] = p[i + 1] + p[i];*/
	}
	p = fibo; //�ʱ�ȭ ó������
	printf("20��°������ �Ǻ���ġ������:\n");
	for (int i = 0; i < 20; i++) {
		printf("%d\n", *p);		/*printf("%d\t", *p++);*/
		p++;
	}



	return 0;















	return 0;
}