#include <iostream>

using namespace std;

int main()
{
    int in0;
    cin>>in0;

    int in = in0 % 12;//������Ӣ��
    int ft0 = in0 / 12;

    int ft = ft0 % 3;//��������Ӣ��
    int yd0 = ft0 / 3;//��ֻ��

    int mi = yd0 / 1760;
    int yd = yd0 % 1760;

    if(mi!=0)
    {
        cout<<mi<<" mi ";
    }
    if(yd!=0)
    {
        cout<<yd<<" yd ";
    }
    if(ft!=0)
    {
        cout<<ft<<" ft ";
    }
    if(in!=0)
    {
        cout<<in<<" in";
    }

    return 0;
}

