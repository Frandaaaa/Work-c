#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    //����ֵ�ж���һ��ȫ���е�
    int a[4] = {1,2,3,4};
    do{
        printf("%d %d %d %d\n",a[0],a[1],a[2],a[3]);
    } while(next_permutation(a,a+4));


    return 0;
}
