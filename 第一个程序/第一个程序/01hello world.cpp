#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
std为标准库standard
io为input和output输入输出库
.h为头文件
*/
//变量的作用域和使用周期
//输入数据
//int main() {
//	//计算两个数的和
//	int num3 = 10;
//	int num2 = 100;
//	int sum = 0;//C语言规定变量要定义在代码块最前面
//	//输入数据适用输入函数scanf_s//scanf是c语言提供的而scanf_s是vs提供的
//	//在第一行前加入#define_CRT_SECURE_NO_WARNINGS
//	scanf_s("%d%d", & num2, & num3);//取地址符号&//两个%d是因为有两个变量需要赋值
//	//如果在这一行定义sum会报错缺少;
//	sum = num2 * num3;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//整体变量与局部变量
/*int num2 = 10;//整体变量：定义在代码块外的变量
int main3() {
	int num1 = 10;//局部变量
	//当局部变量和全局变量冲突时局部变量优先
	return 0;
}
//输出hello world
int main2()//main函数有且仅有一个
{ 
//main前面的int表示main函数返回一个整型
	printf("hello world\n");
	//\n作为换行符跟着里面
return 0;
}*/
//字节字符类型
//int main() {
//	char ch = 'a';//命名字符，单引号
//
//	printf("%c\n", ch);//%c：打印字符格式的数据
//	int age = 20;
//
//	printf("%d\n", age);//%d:打印整型十进制数据
//	//%p以地址的形式打印
//	//%x打印16进制
//	
//	float f = 5.0;//%f:打印浮点型
//
//	printf("%f\n", f);
//
//	double d = 3.14;
//
//	printf("%1f\n", d);//可以用%f打印但是不合适
//	
//	printf("%d\n", sizeof(char));//1字节
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	
//	float weight = 10.2f;//无f则被double截断，有f即向内存申请4个字节存放小数
//
//	return 0;
//}
/*
void main是一个过时的写法
short int短整型
int整型
long长整型
*/
/*一个bit等于8个byte（字节）
二进制；010表示0*2的平方+1*2+0*2的零次等于2
故short有2byte即16bit能表示2的16次方个数
从最小的0到2的16次方-1*/