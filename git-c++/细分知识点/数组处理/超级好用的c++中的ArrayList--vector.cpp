#include <iostream>
#include <vector>

using namespace std;

int main()
{
/*===================�򵥲���=======================*/
	//��������һ
	vector<int> nums;

	//�൱�ڽ�����һ��int���͵���������
	int a = 34;

	//���Ԫ�ط�ʽ��Java���
	//�Ӻ���ǰ
	nums.push_back(a);

	//�����ķ���1
	for(int i = 0; i < nums.size(); i++)
		cout<<"�����к��е�Ԫ��:"<<nums[i]<<endl;

/*================��ϸ�Ĳ��뷽��=================*/
	vector<int> v(3);  

    v[0]=2;  
    v[1]=7;  
    v[2]=9;  
	//����ǰ�������Ԫ��
    v.insert(v.begin(),8);  
    v.insert(v.begin()+2,1);//�ڵ������еڶ���Ԫ��ǰ������Ԫ��  
    v.insert(v.end(),3);//������ĩβ׷����Ԫ�ء�  

	//�����ķ���2��ʹ�õ�����
    vector<int>::iterator it;  
	for(it=v.begin();it!=v.end();it++)  
    {
        cout<<*it<<" ";
    }
    cout<<endl;

/*=====================ɾ��Ԫ��===================*/
	v.clear();//�������Ԫ��
	cout<<v.empty()<<endl;//���1����true

/*================================================*/
	vector<int> myvector;//Ҫô��������Ҫôָ������
	for(int w = 0; w < 10; w++)
		myvector.push_back(w);

	// erase the 6th element
	myvector.erase (myvector.begin()+5);

	// erase the first 3 elements:
	myvector.erase (myvector.begin(),myvector.begin()+3);
	
	cout<<endl<<endl;
	for(unsigned j = 0; j < myvector.size(); j++)
		cout<<myvector[j]<<endl;

	return 0;
}
//http://www.cplusplus.com/reference/vector/vector/erase/