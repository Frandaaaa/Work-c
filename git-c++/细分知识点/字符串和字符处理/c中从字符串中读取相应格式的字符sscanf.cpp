#include <cstdlib>//
#include <cstdio>//
#include <string>//

int main()
{
	//���ܣ��� �ַ��� ��ȡ��ʽ�����룬������ʹ������
	char a[100], alpha[100];
	int num;
	strcpy(a, "123abc");

	//sscanf(const char* str, const char *format...)
	//format [=%[*][width][modifiers]type=]
	//��Ϊ����ʱֻ��int���ͣ���Ҫ�����ַ(���������ǵ�ַ)
	sscanf(a,"%d%s", &num, alpha);

	printf("%s %d\n", alpha, num);//�����ʽ

	/*=========================================================*/
    int day, year;
    char weekday[20], month[20], dtm[100];

    strcpy( dtm, "Saturday March 25 1989" );
    sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );

    printf("%s %d, %d = %s\n", month, day, year, weekday );

   return 0;

}