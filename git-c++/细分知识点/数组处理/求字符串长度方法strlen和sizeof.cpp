#include <string>
#include <cstdio>

int main()
{
	char a[] = "adsf";

	printf("length=%d\n", strlen(a));//û�а���\0
	//���4

	printf("length2=%d\n", sizeof(a));//��Ϊ�����˾���ĩβ�Ľ�������\0
	//���5
}