#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
stdΪ��׼��standard
ioΪinput��output���������
.hΪͷ�ļ�
*/
//�������������ʹ������
//��������
//int main() {
//	//�����������ĺ�
//	int num3 = 10;
//	int num2 = 100;
//	int sum = 0;//C���Թ涨����Ҫ�����ڴ������ǰ��
//	//���������������뺯��scanf_s//scanf��c�����ṩ�Ķ�scanf_s��vs�ṩ��
//	//�ڵ�һ��ǰ����#define_CRT_SECURE_NO_WARNINGS
//	scanf_s("%d%d", & num2, & num3);//ȡ��ַ����&//����%d����Ϊ������������Ҫ��ֵ
//	//�������һ�ж���sum�ᱨ��ȱ��;
//	sum = num2 * num3;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//���������ֲ�����
/*int num2 = 10;//��������������ڴ������ı���
int main3() {
	int num1 = 10;//�ֲ�����
	//���ֲ�������ȫ�ֱ�����ͻʱ�ֲ���������
	return 0;
}
//���hello world
int main2()//main�������ҽ���һ��
{ 
//mainǰ���int��ʾmain��������һ������
	printf("hello world\n");
	//\n��Ϊ���з���������
return 0;
}*/
//�ֽ��ַ�����
//int main() {
//	char ch = 'a';//�����ַ���������
//
//	printf("%c\n", ch);//%c����ӡ�ַ���ʽ������
//	int age = 20;
//
//	printf("%d\n", age);//%d:��ӡ����ʮ��������
//	//%p�Ե�ַ����ʽ��ӡ
//	//%x��ӡ16����
//	
//	float f = 5.0;//%f:��ӡ������
//
//	printf("%f\n", f);
//
//	double d = 3.14;
//
//	printf("%1f\n", d);//������%f��ӡ���ǲ�����
//	
//	printf("%d\n", sizeof(char));//1�ֽ�
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	
//	float weight = 10.2f;//��f��double�ضϣ���f�����ڴ�����4���ֽڴ��С��
//
//	return 0;
//}
/*
void main��һ����ʱ��д��
short int������
int����
long������
*/
/*һ��bit����8��byte���ֽڣ�
�����ƣ�010��ʾ0*2��ƽ��+1*2+0*2����ε���2
��short��2byte��16bit�ܱ�ʾ2��16�η�����
����С��0��2��16�η�-1*/