#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,h,t;
    char j[100010],s[100010];
	int a[100010];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        getchar();
		//������
        scanf("%s",s);
		//ÿһ���е����ݸ���
        scanf("%d",&m);
        getchar();
		//�����ַ���
        scanf("%s",&j);
		//�������ݸ�����ȡ��������
		int ij=0,k=0;
        while(true)
		{
			if(j[ij]=='['||j[ij]==',')
			{
				ij++;
				continue;
			}
			else 
			{
				int len = 0,kk=0;
				int origin = ij;
				while(true)
				{
					if(j[ij]==','||j[ij]==']')
						break;
					len++;
					ij++;
				}
				ij = origin;
				char *change = new char[len];
				for(kk;kk<len;kk++)
				{
					change[kk]=j[ij];
					ij++;
				}

				a[k]= atoi(change);
				k++;
			}
			
			if(j[ij]==']')
				break;
		}

		//���Գ�����a�����д洢��������

        int p=0,q=0;
        h=0;t=m-1;
		//t��ȡ���ݸ���
        for(int ai=0;s[ai]!='\0';ai++)
        {
			//�жϲ�����R:��ת;D:ɾ��
            if(s[ai]=='R')
            {
				//��һ��p��������ֵΪ0
                p=p==1?0:1;
            }
            else if(s[ai]=='D')
            {
                if(h>t)
                {
                    q=1;
                }
                else
                {
                    if(p==1)
                    {
                        t--;
                    }
                    else if(p==0)
                    {
                        h++;
                    }
                }
            }
        }
        
        if(q==1)
            printf("error");
        else
        {
            printf("[");
            if(h>t)
                printf("]");
            else
            {
                if(p==0)//zhengxu
                {
                    for(int bi=h;bi<=t;bi++)
                    {
                        printf("%d",a[bi]);
                        if(bi<t)
                            printf(",");
                        else
                            printf("]");
                    }
                    
                }
                if(p==1)//daoxu
                {
                    for(int ci=t;ci>=h;ci--)
                    {
                        printf("%d",a[ci]);
                        if(ci>h)
                            printf(",");
                        else
                            printf("]");
                    }
                }
            }
        }
        printf("\n");
        
    }
    return 0;
}