#include <iostream>
#include <string>
using namespace std;
struct stu {
	string name;
	char sex;
	int age;
};

//���vc��֧������﷨woc
//struct stu b = {"cuiqin2", 'm', 19};

//���������Ҫtypedef ʹ�ú���Ŀ���ֱ�ӳ�Ϊһ������
typedef struct stud {
	string name;
	string sex;
	int age;
	int id;
}st;

//��������Ϊ2�Ľṹ������
struct stude {
	string name;
	int age;
	int id;
}stu[2];

int main() {

	struct stu a;
	a.name = "cuiqin";
	a.sex = 'm';
	a.age = 19;
	cout<<"ԭ�����: ";
	cout<<a.name<<endl;

//	cout<<b.sex<<endl;
	st c;
	c.name = "cuiqinhaha";
	c.age = 19;
	c.id = 011;
	c.sex = "nan";
	cout<<"������������: ";
	cout<<c.name<<endl;

	//vc�ƺ�Ҳ��֧�ֽṹ������������������
	stu[0] = {"cuiqin",19,011};
    cout<<"�ṹ��������������: ";
	cout<<stu[0].name<<endl;

	return 0;
}
