#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct book
{
	char name[20];
	int price;
};
int main()
{
	struct book b1 = { "C���Գ������",55 };
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct book* pb = &b1;//����pb��ӡ�����ͼ۸�
	printf("%s\n", pb->name);//. �ṹ�����.��Ա
	printf("%d\n", pb->price);//-> �ṹ��ָ��
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("������%s\n", b1.name);
	//printf("�۸�%dԪ\n", b1.price);
	return 0;
}