#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct book
{
	char name[20];
	int price;
};
int main()
{
	struct book b1 = { "C语言程序设计",55 };
	//利用结构体类型创建一个该类型的结构体变量
	struct book* pb = &b1;//利用pb打印书名和价格
	printf("%s\n", pb->name);//. 结构体变量.成员
	printf("%d\n", pb->price);//-> 结构体指针
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d元\n", b1.price);
	return 0;
}