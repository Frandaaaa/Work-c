#include <stdio.h>
#include <string.h>
struct S
{
	int data[100];
	int num;
};

struct S s = {{1,2,3,4},233};
void print1(struct S s) {
	printf("%d\n", s.num);
}
void print2(struct S *ps) {
	printf("%d\n", s.num);
}

int main() {
	//way1: �ѽṹ����������ȥ
	//print1(s);//ռ���ڴ�̫��
	//way2: �ѽṹ���ַ����ȥ
	print2(&s);
	return 0;
}
