#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void perm(int list[],int low,int high)
{
    if(low==high)  //��low==highʱ,��ʱlist��������һ������,���list
	{
        for(int i=0;i<=low;i++)
            cout<<list[i];
        cout<<endl;
    } else
	{
        for(int i=low;i<=high;i++)//ÿ��Ԫ�����һ��Ԫ�ؽ���
		{
            swap(list[i],list[low]);
            perm(list,low+1,high); //������,�õ�������,�ú���perm�õ������е�ȫ����
            swap(list[i],list[low]);//���,��Ԫ�ؽ�������,��ԭ,Ȼ�󽻻���һ��Ԫ��
        }
    }
}
int main()
{
    int list[]={1,2,3,4,5};
    perm(list,0,4);

    return 0;
}
