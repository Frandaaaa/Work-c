#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	vector<int> v;

	int a;
	while(cin>>a)
	{
		v.push_back(a);
	}

	vector<int>::iterator it;
	//max
	cout<<"============max()=================="<<endl;
	int c = 1,
		b = 23;
    cout<<c<<" and "<<b<<endl;
	cout<<max(c,b)<<endl<<"================sort()==============="<<endl;;

	//sort
	//��������������
	sort(v.begin(),v.end());
	cout<<"===========����=================="<<endl;
	//�������������
	int e[] = {2,323,24,324,34,24,23};
	sort(e,e+sizeof(e)/sizeof(int));
	cout<<endl;

	for(int i = 0; i < sizeof(e)/sizeof(int); i++)
        cout<<e[i]<<" ";
    cout<<endl<<"============������================="<<endl;

	for(it = v.begin(); it!= v.end(); it++)
		cout<<*it<<endl;

    //find
    //������
    cout<<"================find()==================="<<endl;
    cout<<"================������()==================="<<endl;
    vector<int>::iterator iter=find(v.begin(),v.end(),21);
    if(iter==v.end()) {
        cout<<"Ī��"<<endl;
    } else {
        cout<<*it<<"���������"<<endl;
    }
    cout<<endl<<"============����========================"<<endl;

    //��������
    int *p = find(e,e+sizeof(e)/sizeof(int),24);
    if(p==e+sizeof(e)/sizeof(int)) {
        cout<<"Ī��"<<endl;
        return 1;
    } else {
        cout<<"��"<<endl;
    }

	return 0;
}
