#include<stdio.h>
#include<string.h>
//�����º����ĺ�����
//int add(int x,int y) {
//	int z = x + y;
//	return z;
//}
//int main1() {
//	int num1 = 10;
//	int num2 = 20;
//	int a = 2;
//	int b = 4;
//	int sum = add(num1, num2);
//	//���϶�����һ�ֿ�ݵĺ�������ӷ�����
//	printf("sum=%d", sum);
//	return 0;
//}

//ѭ�����
/*
int main() {
	int line = 0;
	printf("��ʼѧϰ");
	while (line <= 1000)
	{
		printf("��һ�д���:%d\n", line);
		line++;
	}
	if (line >= 1000)
		printf("����ȥ��������");
	return 0;
}
*/
//ѡ�����
/*
int main() {
	int input = 0;
	printf("��Ҫ�ú�ѧϰ��(1/0)\n");
	scanf_s("%d", &input);
	if (input == 1)
		printf("��offer\n");
	else
		printf("������\n");//ֻ��һ�����ʱ���Բ��ü�{}
	return 0;
}
*/
//ctr+K+Cע��ѡ����
//ctr+K+uȡ��ѡ���е�ע��
/*����ע�ͷ�ʽ����Ƕ��*/

//\tˮƽ�Ʊ��
//\n���з�
//\\ת���ַ���ʹ\��Ϊ��ͨб�ܣ�\"�Լ�\'ͬ��
//\32����˵������Ϊ8�������ִ����ʮ�������ֵ�ASCII��ֵ
/*int main() {
//	"abc";//˫������������ַ���
//	"";//���ַ���
	char arr1[] = "abc";
	//ʵ���ϰ���'a','b','c',\0��ֵΪ0��Ϊ�ַ����Ľ�����־
	char arr2[] = { 'a','b','c' ,'\0'};//\0��Ϊ������־����
	//���������ʱҲҪĩβ����0//char arr2[] = {'a','b','c',0}Ҳ����
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//strlen-string length(�����ַ�������//��Ҫ���ϵڶ���ͷ�ļ�
	printf("%d\n", strlen(arr2));

	return 0;
}*/
/*//4.ö���ͳ���
//ö�ٹؼ�enum
enum SEX {
	MALE,
	FEMALE,
	SECRET
};
int main() {
	//ʹ��
	//enum SEX s = MALE;
	printf("%d\n", MALE);//Ĭ��ֵΪ0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	//enum SEX s = male;//error

}*/
/*//3.#define����ı�ʶ������
#define max 10
int main() {
	int arr[max] = { 0 };//arr��������[]�����ų���
	const int num = 10;
	//int arr[num] = { 0 };//���������
	printf("%d\n", max);
	return 0;
}*/
/*int main() {
	int num = 4;
	//constΪ������
	//const int num=4;��numΪconst���εĳ�����
	printf("num");
	num = 8;
	printf("num");


	return 0;
}*/