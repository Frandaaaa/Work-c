#include "stdio.h"
int n,i;         /* ��ע�������n��i����Ϊȫ�ֱ��������� */  
float val[100];  /* ������������ռ��ַ����е��� */
char c[1000],fu[100];  /* c�������ַ�������fu���������ռ��������+-* /�ͣ�����*/
 
float digui()
{
    float he=0,ji=0;  /* he����Ӽ���������ji����˳������� */
    char hefu='+';    /* ÿ�ν���ݹ��ǣ���Ҫ�ѱ�ʾ��he����Ϊ0��hefu����Ϊ+�����Ǹ���ʾ��ji���Բ������� */
     
    for( ;fu[i]!='}'&&fu[i]!='=';i++)
    {
        switch(fu[i])
        {
 
            case '{':
            i++;
            digui();  // �������Բ���ţ������ȼ���Բ�������������
            break;
             
             
             
            case '+':
            if(hefu=='+') {val[n] = he + val[n];he = val[n];}  
            else          {val[n] = he - val[n],he = val[n];}  // ���+��-����ķ�����Ȼ�ǼӼ�������Խ��м���
            hefu = '+';                                        
            n++;
            break;
             
            case '-':
            if(hefu=='+')  {val[n] = he + val[n];he = val[n];}  
            else           {val[n] = he - val[n];he = val[n];}  // ͬ��
            hefu = '-';
            n++;
            break;
             
            case '*':  //  ����������ȼ���һ���ĳ˷��š�������š��������ѭ����ֱ�������ǳ˳�����ʱ�Ƴ�
            {
            ji=val[n];  // ji�����ﱻ����
            while(1)
            {
               if(fu[i] == '*')
               {
                  if(fu[i+1] == '{')  //  ����ڳ˳�ѭ��������Բ���ţ���ݹ���������������ȼ���Բ�������������
                    {
                            i+=2;n++;
                            ji = ji * digui();
                    }
                  else
                    {
                            ji = ji*val[n+1];
                            i++;n++;
                    }
                }
                else if(fu[i] == '/')
                {
                    if(fu[i+1] == '{')
                    {
                            i+=2;n++;
                            ji = ji / digui();
                    }
                    else
                    {
                            ji = ji/val[n+1];
                            i++;n++;
                    }
                }
                else break;  // �����ǳ˳����ţ��˳�
            }
            val[n] = ji;  // �˳�ѭ����������n����ָ��������ó�ѭ������Ľ�������Ա����Ժ������he���㣬���ó�ǰ����������������
            if(fu[i]=='+'||fu[i]=='-')
            i--;
            break;
            }
             
            case '/':   //����������Ǹ�case���������һ��
            {
                ji = val[n];
                while(1)
                {
                    if(fu[i] == '*')
                    {
                        if(fu[i+1] == '{')
                        {
                            i+=2;n++;
                            ji = ji * digui();
                        }
                        else
                        {
                            ji = ji*val[n+1];
                            i++;n++;
                        }
                    }
                    if(fu[i] == '/')
                    {
                        if(fu[i+1] == '{')
                        {
                            i+=2;n++;
                            ji = ji / digui();
                             
                        }
                        else
                        {
                            ji = ji/val[n+1];
                            i++;n++;
                        }
                    }
                    else break;  
                }
            } 
            val[n] = ji;
            if(fu[i]=='+'||fu[i]=='-')
            i--;
            break;
            }
    }
     
    if(hefu == '+') val[n] = he + val[n];  // ��������ǵ���һ���ݹ�Ľ�����Ȼ�����hefu��״̬��������+�����-����
    else val[n] = he - val[n];
     
    return val[n];  // ���������Ҫ�������ֵ
}
 
void main()
{
    int a=0,j=0;float b=0,d=0,g=10;;
    gets(c);
     
    for(i=0;c[i]!=0&&i<1000;i++)
    {
        if(c[i]>='0'&&c[i]<='9')
        {
             
            while(c[i]>='0'&&c[i]<='9')
            {
                b=(c[i]-'0')+b*10;
                i++;
            }
            if(c[i]=='.')
            {
                i++;
                while(c[i]>='0'&&c[i]<='9')
                {
                    d=d+(c[i]-'0')/g;
                    g*=10;
                    i++;
                }
            }  // �������ֻ��������е���
        val[n]=b+d;
        n++;
        }
      b=0;d=0;g=10;
    }
     
    for(i=0;c[i]!=0;i++)
        {
            if(c[i] < '0' || c[i] > '9')
            fu[j++]=c[i];
        }  // ��������ռ��������е������
    
    j=n;
     
    i=0;
    n=0;  // ����������Ǳ����
     
     
    printf(":::::%f\n", digui());
}