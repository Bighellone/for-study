#include<stdio.h>
//�ṹ��
struct Book {
	char name[20];//����
	short price;
};
int main() {
	////���ýṹ�崴��һ�������͵ı���
    struct Book b1 = {"C����",55};
	//printf("����%s\n", b1.name);
	//printf("�۸�%dԪ\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
	//����pb��ӡ������۸�
	struct Book* pb = &b1;
	//һ��д��
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	//��һ�ָ������д��
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	return 0;
}
//ָ��
//int main() {
//	int a = 10;//�������ĸ��ֽڵĴ���
//	int* p = &a;//ȡ��ַ
//	printf("%p\n", &a);//�õ�ʮ�����Ƶĵ�ַ
//	printf("%p\n", p);
//	* p = 20;
//	printf("%d\n",a );
//	//ָ���������ר�����ڴ�ŵ�ַ�ı���
//	return 0;
//}

////static����
////���κ���,�ı亯������������
////�ⲿ���ӡ�>�ڲ���������
//extern int add(int, int);//�����ⲿ����
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//// ����ȫ�ֱ���
////int main() {
////	extern int g_val;
////	printf("g_val=%d\n", g_val);//extern-���������ⲿ����
////	return 0;
////}
////���ξֲ��������ӳ������α�������������
////void test() {//void��Ϊ�޼�û�з���ֵ
////	static int a = 1;//staticʹa��Ϊ��̬�ľֲ�����//ʹvoid�޷����٣�
////	
////	a++;
////	printf("a=%d\n", a);
////}
////int main1() {
////	int i = 0;
////	while (i < 5) {
////		test();
////		i++;
////	}
////	return 0;
////}


//������
// ��������������exp1��exp2��exp3;)//exp��Ϊ���ʽ
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//exp1Ϊ����ִ��exp2����֮��exp3//��Ŀ������
//	printf("max=%d\n", max);
//	return 0;
//}

//// �߼����������߼��룺&&
//// ��-��0
//// ��-0
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = a && b;
//	printf("c=%d\n", c);
//	return 0;
//}

//// ǿ������ת���������ͣ�
//int main() {
//	int a = (int)3.14;//�˴���������ǿ��ת��Ϊ���ʹ���
//	return 0;
//}

// ++��--
//int main() {
//	int a = 10;
//	//int b = a++;//����++���ȵó�b��ֵ����ʹ++
//	//int b = ++a;//ǰ��++��
//	int b = a--;//����--
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}

//ԭ�뷴�벹��
//ԭ�루��λȡ�����õ����루��һ���õ�����
//printf()//��ӡʹ�õ��Ǹ�����ԭ��