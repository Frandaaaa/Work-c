/**
 * function:    �ʹ�
 * Author:      ����
 * version:     1.0
 * thinking:    �����г�ÿһ�е�*�Ϳո�ĸ������ҵ�˼·�����Կ����ǰ˸������ε��ӣ�ÿһ�е�*�Ϳո���ֲ�
 *              *     * *     *
 *              1 3 3 1 1 3 3 1
 *              2 2 2 2 2 2 2 2
 *              3 1 1 3 3 1 1 3
 *              4 0 0 4 4 0 0 4
 *              �ҵ���ϵʽ��
 *              for h = 4//�ⲿȷ���߶�
 *              {
 *              for i => h			    *
 *              for j => (h - i)*2		\b
 *              for k => h * 2		    *   ע�⣺��������������i��ֵ���ᵼ��i��ֵΪ6
 *              for j => (h - i)*2		\b
 *              for i => h			    *
 *              }
 */
 #include <iostream>

 using namespace std;

 int main()
 {
     //�����ǺźͿո�Ĺ�ϵ��ͼ
     int h,i,j,k;
     int num;
     cout<<"����������Ҫ�ĸ߶�"<<endl;
     cin>>num;

     for(h = 0;h<=num;h++)
     {
         for(i = 0;i<h;i++)
         {
             cout<<"*";
         }
         for(j = 0;j<(num-i)*2;j++)
         {
             cout<<" ";
         }
         for(k = 0;k<h*2;k++)
         {
             cout<<"*";
         }
         for(j = 0;j<(num-i)*2;j++)
         {
             cout<<" ";
         }
         for(i = 0;i<h;i++)
         {
             cout<<"*";
         }
         cout<<endl;
     }

     return 0;
 }
