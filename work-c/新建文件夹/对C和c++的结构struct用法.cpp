#include <iostream> //c++
#include <cstdlib>

using namespace std; 

//��C�ж���һ���ṹ������Ҫ��typedef:
typedef struct Student
{
	int a;
}Stu;
//����������������ʱ��Ϳɣ�Stu stu1;
//���û��typedef�ͱ�����struct Student stu1;������
//�����Stuʵ���Ͼ���struct Student�ı�����
//��������Ҳ���Բ�дStudent������Ҳ����struct Student stu1;��)

typedef struct
{
	int a;
}Stu;

//����c++��ܼ򵥣�ֱ��
struct Student
{
	int a;
};
//���ǾͶ����˽ṹ������Student��
//��������ʱֱ��Student stu2��

//��c++�������typedef�Ļ����ֻ��������
struct Student1
{ 
	int a; 
}stu1;//stu1��һ������ 

typedef struct Student2 
{ 
	int a; 
}stu2;//stu2��һ���ṹ������ 
//ʹ��ʱ����ֱ�ӷ���stu1.a
//����stu2������� stu2 s2;
//Ȼ�� s2.a=10;

typedef struct _point
{ 
	int x; 
	int y; 
} point; //����ṹ�壬���ṹ��һ������ 

struct _hello
{ 
	int x,y; 
} hello; //ͬʱ����ṹ��Ͷ��� 

int main() 
{ 
	point pt1; 
	pt1.x = 2; 
	pt1.y = 5; 

	cout<< "ptpt1.x=" << pt1.x << "pt.y=" <<pt1.y <<endl; 
	//hello pt2; 
	//pt2.x = 8; 
	//pt2.y =10; 
	//cout<<"pt2pt2.x="<< pt2.x <<"pt2.y="<<pt2.y <<endl; 
	//�����hello pt2;��һ�б��뽫����ͨ��. Ϊʲô? 
	//��Ϊhello�Ǳ������˵Ķ���ʵ����. 
	//��ȷ��������: ��hello.x��hello.y 
	hello.x = 8; 
	hello.y = 10; 
	cout<< "hellohello.x=" << hello.x << "hello.y=" <<hello.y <<endl; 

	return 0; 
}