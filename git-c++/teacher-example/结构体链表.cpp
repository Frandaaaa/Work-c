#include <iostream>
#include <stack>

using namespace std;

// �ṹ�������
struct time{
     int day;
	 int month;
	 int year;
};
// ʹ��typedefΪ�ṹ����������
typedef struct student1{
      char *name;
	  int number;
	  int age;
	  time t;
	  struct student1 *pnext;
}Student1,*Ptrstudent1;

typedef struct student2{
      char name[20];
	  int number;
	  int age;
	  time t;
	  struct student2 *pnext;
}Student2,*Ptrstudent2;

void stu1()
{
	/*���ֶ��巽��*/
   struct student1 *p = new student1; // malloc()
   Student1 *p1 = new Student1;
   Ptrstudent1 p2 = new Student1;

   /*�й���Ϣ�ĳ�ʼ��*/
   p->name = "���Ҹ�";
   p->age = 20;
   p->number = 15101;
   p->t.day = 6;
   p->t.month = 6;
   p->t.year = 2016;
   p->pnext = NULL;

   p1->name = "֣����";
   p1->age = 20;
   p1->number = 15102;
   p1->t.day = 5;
   p1->t.month = 5;
   p1->t.year = 2016;
   p->pnext = p1;
   p1->pnext =	NULL;

   p2->name = "����";
   p2->age = 20;
   p2->number = 15103;
   p2->t.day = 1;
   p2->t.month = 1;
   p2->t.year = 2016;
   p1->pnext = p2;
   p2->pnext = NULL;

   /*��Ϣ�����*/
   for(;p != NULL; p = p->pnext)
   {
       cout<<"ѧ������"<<p->name<<endl;
       cout<<"ѧ������"<<p->age<<endl;
	   cout<<"ѧ��ѧ��"<<p->number<<endl;
	   cout<<"ѧ����ѧ���"<<p->t.year<<endl;
	   cout<<"ѧ����ѧ�·�"<<p->t.month<<endl;
	   cout<<"ѧ����ѧ����"<<p->t.day<<endl;
	   cout<<"\n\n";
   }
}

void stu2()
{
    /*���ֶ��巽��*/
	struct student2 *head = NULL;//ͷ��㣬��������׵�ַ
	Student2 *p1 , *p2 ;
	p1 = p2 = new Student2;
    int N = 0;  //������¼ѧ��������

	while(true)
	{
	   cout<<"������ѧ����ѧ�ţ�����ѧ����0������Ϣ���룩:";
	   cin>>p1->number;

	   if(p1->number == 0)  //�ж��Ƿ����ѧ����Ϣ������
		   break;
       //�������ѧ�Ų�Ϊ0�����������ѧ����Ϣ
	   N++;

	   cout<<"������ѧ��������:";
	   cin>>p1->name;
	   cout<<"������ѧ��������:";
	   cin>>p1->age;
	   cout<<"������ѧ������ѧ���:";
	   cin>>p1->t.year;
	   cout<<"������ѧ������ѧ�·�:";
	   cin>>p1->t.month;
	   cout<<"������ѧ������ѧ����:";
	   cin>>p1->t.day;

	   if(1 == N)
	     head = p1;
	   else
		   p2->pnext = p1;
	   p2 = p1;
	   p1 = new student2;
	}

    p2->pnext = NULL;

    Student2 *p = head;

	//�������ѧ����Ϣ���
	cout<<"\n\n���ѧ����ϢΪ:"<<endl;
	 for(;p != NULL; p = p->pnext)
       {
           cout<<"ѧ������"<<p->name<<endl;
           cout<<"ѧ������"<<p->age<<endl;
           cout<<"ѧ��ѧ��"<<p->number<<endl;
           cout<<"ѧ����ѧ���"<<p->t.year<<endl;
           cout<<"ѧ����ѧ�·�"<<p->t.month<<endl;
           cout<<"ѧ����ѧ����"<<p->t.day<<endl;
           cout<<"\n\n";
       }

}

int main()
{
   stack s;
   s.push(10);
   s.pop();
   int n;
   cout<<"ѡ��1ֱ������ڲ��洢��ѧ��������Ϣ"<<endl;
   cout<<"ѡ��2������������ѧ����ϢȻ���ӡ���"<<endl;
   cout<<"���������Ϊ0ʱ����ʾ����ѡ��"<<endl;
   cout<<"��������Ҫѡ��ĳ������:"<<endl;
   while(cin>>n)
   {
	   if(n == 0)
		   break;

       switch(n)
	   {
         case 1:  stu1(); break;

         case 2:  stu2(); break;

         default:
	         cout<<"���������"<<endl;
	           break;
	   }

   }

return 0;
}
