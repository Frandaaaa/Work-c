/*
    ����һ�������֣�����֮�䶺�Ÿ����������ִ浽������������
*/

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    string input;
    cout<<"����һ���Զ���Ϊ�ָ����������ַ�����"<<endl;
    while(cin>>input)
    {
		//vector
        vector<int> nums;
        // string->char *
		//c_str
        char *s_input = (char *)input.c_str();
        //const char * split = ",";//Ҳ����ֱ��ʹ�÷ָ��ַ�������ɶ����Ŷ
        // �Զ���Ϊ�ָ�������ַ���
		//strtok
        //char *p = strtok(s_input, split);
		char* p = strtok(s_input, "ab");

        int a;
        while(p != NULL)
        {
            // char * -> int
			//sscanf
            sscanf(p, "%d", &a);
			//push_back
            nums.push_back(a);
            p=strtok(NULL, "ab");
        }

        cout<<"����õ������֣�"<<endl;
        for(a = 0; a < nums.size(); a++)
        {
            cout<<nums[a]<<endl;
        }
    }
    return 0;
}
//https://blog.csdn.net/xufan0001/article/details/70187836