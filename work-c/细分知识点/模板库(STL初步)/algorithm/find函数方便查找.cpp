#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<string> v;
    v.push_back("aaa");
    v.push_back("bbb");
    v.push_back("ccc");
    v.push_back("ddd");
    for(int i = 0; i <v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    string need = "aaa";
    if(find(v.begin(),v.end(),need)!= v.end()){
        cout<<"find "<<need<<"_index: ";
        //����find�������ص�������int
        int index = find(v.begin(),v.end(),need)-v.begin();
        cout<<index<<endl;
        /*����find�����ķ��ؽ����vector��e
		  nd�ȽϿ��Կ�����ʵ����һ��ָ��
          ����ô���������Ҫ�������
          ��ô�����ؽ����begin�����
		 */
    }
    else
        cout<<"NO"<<endl;

	return 0;
}
