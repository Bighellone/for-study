#include<stdio.h>
#include<string.h>
//定义新函数的函数体
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
//	//以上定义了一种快捷的函数处理加法运算
//	printf("sum=%d", sum);
//	return 0;
//}

//循环语句
/*
int main() {
	int line = 0;
	printf("开始学习");
	while (line <= 1000)
	{
		printf("敲一行代码:%d\n", line);
		line++;
	}
	if (line >= 1000)
		printf("不用去烤红薯了");
	return 0;
}
*/
//选择语句
/*
int main() {
	int input = 0;
	printf("你要好好学习吗？(1/0)\n");
	scanf_s("%d", &input);
	if (input == 1)
		printf("好offer\n");
	else
		printf("卖红薯\n");//只有一个语句时可以不用加{}
	return 0;
}
*/
//ctr+K+C注释选中行
//ctr+K+u取消选中行的注释
/*这种注释方式不能嵌套*/

//\t水平制表符
//\n换行符
//\\转义字符，使\成为普通斜杠，\"以及\'同用
//\32代表说是其作为8进制数字代表的十进制数字的ASCII码值
/*int main() {
//	"abc";//双引号引起的是字符串
//	"";//空字符串
	char arr1[] = "abc";
	//实际上包含'a','b','c',\0（值为0（为字符串的结束标志
	char arr2[] = { 'a','b','c' ,'\0'};//\0作为结束标志存在
	//故输入代码时也要末尾输入0//char arr2[] = {'a','b','c',0}也可以
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//strlen-string length(计算字符串长度//需要加上第二行头文件
	printf("%d\n", strlen(arr2));

	return 0;
}*/
/*//4.枚举型常量
//枚举关键enum
enum SEX {
	MALE,
	FEMALE,
	SECRET
};
int main() {
	//使用
	//enum SEX s = MALE;
	printf("%d\n", MALE);//默认值为0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	//enum SEX s = male;//error

}*/
/*//3.#define定义的标识符常量
#define max 10
int main() {
	int arr[max] = { 0 };//arr数组后面的[]里必须放常量
	const int num = 10;
	//int arr[num] = { 0 };//会产生报错
	printf("%d\n", max);
	return 0;
}*/
/*int main() {
	int num = 4;
	//const为常属性
	//const int num=4;则num为const修饰的常变量
	printf("num");
	num = 8;
	printf("num");


	return 0;
}*/