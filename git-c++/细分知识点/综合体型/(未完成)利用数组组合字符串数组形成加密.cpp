#include <iostream>
#include <string>
//˼·����������ת��������ȷ����Ҫ��ĸ����ţ�Ȼ��ŵ��������棬����һ������ļ����������Ժ�洢�����ʱת��
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <vector>
using namespace std;
//����ת��������Сдת��������ת��
//������������ת��
//������������ת��
//����ת��������ַ���
void exchange(string,char alpha[],int,string &);
void printAtten1(string &);
void printAtten2();
void inputString(string &,int);
template <typename T>
void print(vector<T> v)
{
	for(vector<T>::iterator it = v.begin();it!=v.end();it++)
		cout<<*it;
	cout<<endl;
}
const int N = 27;
int main()
{
					// 0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25
	char alpha[N] = {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	char YN;
	cout<<"��ѡ��ת��ģʽ������(y)������(n): ";
	cin>>YN;

	while(YN!='y'&&YN!='n')
	{
		cout<<"�밴��Ҫ��ѡ����: ";
		cin>>YN;
	}

	switch(YN)
	{
	case 'y':
	    {
			cin.clear();
			cin.sync();
			//�Ƚ�Сģ�������ȥ
			int i = 0;
            string input="", ss = "";
			int yn = 1;
			inputString(ss,yn);
			for(i=0;i<ss.length();i++)
			{
				if(ss[i]==' '||!isalpha(ss[i]))
				{
					input += ss[i];
					continue;
				}
				else 
				{
					if(!islower(ss[i]))
					{
						static_cast<char>(tolower(ss[i]));
					}
					input += ss[i];
				}
			}
			vector<int> v;
			for(i=0;i<ss.length();i++)
			{
				for(int j=0;j<N;j++)
				{
					if(ss[i]==alpha[j])
					{
						v.push_back(j*2);
						v.push_back(0);
					}
				}
			}
            print(v);
            break;
	    }
	case 'n':
			{
				cin.clear();
				cin.sync();
				int i = 0;
				string input="", ss = "";
				int yn = 0;
				inputString(ss,yn);
				for(i=0;i<ss.length();i++)
				{
					if(ss[i]==' '||!isdigit(ss[i]))
					{
						continue;
					}
					else 
					{
						input += ss[i];
					}
				}
				cout<<"yes"<<endl;

				vector<int> v;
				for(i=0;i<ss.length();i++)
				{
					char cc[1000] = "";
					string sss;
					sss = ss[i] + "";
					strcpy(cc,sss);
					int n = atoi(cc);
					cout<<n<<endl;
					int num = 0;
					while(n)
					{
						i++;
						ss = ss[i] + "";
						strcpy(cc,sss);
						n = atoi(cc);
						num = num*10 + n;
					}
					num/=10;
					v.push_back(num/2);
					i++;
					ss = ss[i] + "";
					strcpy(cc,sss);
					n = atoi(cc);
					if(n)
						i--;
					else
					{
						v.push_back(0);
						i++;
					}
				}
				print(v);
				break;
			}
    default:
        break;
	}


	//ѡ��ģʽ������ת�������С�����ת�������(�룬��)

	return 0;
}

void exchange(string s,char alpha[],int len,string &nums)
{
	
}
void printAtten1(string& input)
{
	
}
void inputString(string& ss,int yn)
{
	int i =0;
	char input[1000];
	if(yn)
		cout<<"������������Ҫ���ܵ�Ӣ��: ";
	else
		cout<<"��������Ҫ���ܵ����ִ�: ";
	cout<<endl;
	cin.getline(input,1000,'\n');
	
	while(input[i]!='\0')
	{
		ss += input[i];
		i++;
	}
	
}