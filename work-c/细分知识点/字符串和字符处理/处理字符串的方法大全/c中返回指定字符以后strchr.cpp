#include <stdio.h>
#include <stdlib.h>
#include <cstring>
int main() {
	//c============================================
    char *s = "0123456789012345678901234567890";
    char *p,*q;
    unsigned char tmp;
    p = strchr(s, '5');
    printf("ԭ�����ַ���:%s\n", s);
    printf("5֮����ַ���:%s\n", p);

	return 0;
}
