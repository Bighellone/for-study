#include<stdio.h>
//结构体
struct Book {
	char name[20];//书名
	short price;
};
int main() {
	////利用结构体创建一个该类型的变量
    struct Book b1 = {"C语言",55};
	//printf("书名%s\n", b1.name);
	//printf("价格%d元\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格%d元\n", b1.price);
	//利用pb打印书名与价格
	struct Book* pb = &b1;
	//一种写法
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	//另一种更方便的写法
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	return 0;
}
//指针
//int main() {
//	int a = 10;//申请了四个字节的存在
//	int* p = &a;//取地址
//	printf("%p\n", &a);//得到十六进制的地址
//	printf("%p\n", p);
//	* p = 20;
//	printf("%d\n",a );
//	//指针变量——专门用于存放地址的变量
//	return 0;
//}

////static变量
////修饰函数,改变函数的链接属性
////外部链接—>内部链接属性
//extern int add(int, int);//声明外部函数
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//// 修饰全局变量
////int main() {
////	extern int g_val;
////	printf("g_val=%d\n", g_val);//extern-用于声明外部符号
////	return 0;
////}
////修饰局部变量，延长所修饰变量的生命周期
////void test() {//void意为无即没有返回值
////	static int a = 1;//static使a成为静态的局部变量//使void无法销毁，
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


//操作符
// 条件操作符：（exp1？exp2：exp3;)//exp意为表达式
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//exp1为真则执行exp2，反之则exp3//三目操作符
//	printf("max=%d\n", max);
//	return 0;
//}

//// 逻辑操作符：逻辑与：&&
//// 真-非0
//// 假-0
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = a && b;
//	printf("c=%d\n", c);
//	return 0;
//}

//// 强制类型转换：（类型）
//int main() {
//	int a = (int)3.14;//此处将浮点型强行转换为整型储存
//	return 0;
//}

// ++与--
//int main() {
//	int a = 10;
//	//int b = a++;//后置++，先得出b的值，再使++
//	//int b = ++a;//前置++，
//	int b = a--;//后置--
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}

//原码反码补码
//原码（按位取反）得到反码（加一）得到补码
//printf()//打印使用的是个数的原码