// using struct

#include <iostream>
#include <cstring>

using namespace std;

struct student
{
	char name[20];
	int number;
	char sex;
	char id[20];
	char address[50];
	student *next; //������ָ��
};

int main()
{
	student stu; // ������һ���ṹ�����͵ı���
	student *p = &stu;
	
	// ���ʽṹ���Ա��Բ�������
	strcpy(stu.name, "xidada");
	stu.number = 18001;
	stu.sex = 'm';
	strcpy(stu.id,"410101199810010558");
	strcpy(stu.address, "����ʡ֣���н�ˮ����ˮ·200��");
	

	cout << " the infomation of this student are: " << endl;
	cout << " name: " << stu.name << endl;
	cout << " number: " << stu.number << endl;
	cout << " sex: " << stu.sex << endl;
	cout << " id: " << stu.id << endl;
	cout << " address: " << stu.address << endl;


	cout << " \n Point type: the infomation of this student are: " << endl;
	cout << " name: " << p->name << endl; // ָ����Ҫʹ�ü�ͷ��������ʽṹ��ĳ�Ա
	cout << " number: " << p->number << endl;
	cout << " sex: " << p->sex << endl;
	cout << " id: " << p->id << endl;
	cout << " address: " << p->address << endl;

	student stud[3];
	int i=0;
	for( ; i<3; i++)
	{
		cout << "�������" << i+1 << "��ѧ������Ϣ" << endl;
		cout << "name: ";
		cin >> stud[i].name;
		cout << "number: ";
		cin >> stud[i].number;
		cout << "sex: ";
		cin >> stud[i].sex;
		cout << "id: ";
		cin >> stud[i].id;
		cout << "address: ";
		cin >> stud[i].address;
	}

	for(i=0; i<3; i++)
	{
		cout << "��" << i+1 << "��ѧ������Ϣ" << endl;
		cout << "name: " << stud[i].name;
		cout << "\nnumber: " << stud[i].number;
		cout << "\nsex: " << stud[i].sex;
		cout << "\nid: " << stud[i].id;
		cout << "\naddress: " << stud[i].address << endl;
	}

	int count=0;
	student *pstu= NULL; //NULL��pstu��ʼ��Ϊ�գ�NULL��ֵ����OS�Ĳ�ͬ�᲻ͬ��
	pstu = new student;
	while(true)
	{
		
	}

	
	return 0;
}
