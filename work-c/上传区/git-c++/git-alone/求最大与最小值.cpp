/**
 *  Author:     ����
 *  function:   ����������ֵ��������Сֵ
 *  weakness:   ��Ҫ�����������ֵĳ���
 *  version:    1.0
 */

 #include <iostream>

 using namespace std;

 int main()
{
    int N,nums;
    cin>>N;
    cout<<"����N����:"<<endl;

    int max = -999;
    int min = 999;

    for(int i = 0;i<N;i++)
    {
        cin>>nums;
        if(nums>max)
        {
            max = nums;
        }
        if(nums<min)
        {
            min = nums;
        }
    }
    cout<<max<<" "<<min<<endl;

    return 0;
}
