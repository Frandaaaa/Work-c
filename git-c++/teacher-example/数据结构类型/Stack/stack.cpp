/*****************************************************************
 ## �ļ�����stack.cpp
 ## ���ߣ�	Berkeley
 ## ���ܣ�	˳��ջ�Ķ����Լ������������ʵ��
 ## �汾��	V1.0
 ****************************************************************/

#include "stack.h"


//***********ջ�����Ķ���*****************************************
//����һ����ջ
Status InitStack(SqStack &S)
{
	S.base = (int *)malloc(STACK_INIT_SIZE *sizeof(int));

	if(!S.base)
		exit(OVERFLOW); //�洢����ʧ��

	S.top=S.base;

	S.stacksize=STACK_INIT_SIZE;

	return OK;
}

//����ջS��S���ٴ���
Status DestroyStack(SqStack &S)
{
	if(!S.base)
	{
		cout << "ջ��������" << endl;
	}
	else
	{
		S.stacksize=0;
		S.top=NULL;
		free(S.base);
		S.base=NULL;
		cout << "ջ�ѱ�����" << endl;
	}

	return OK;
}

//��S��Ϊ��ջ
Status ClearStack(SqStack &S)
{
	if(!S.base)
	{
		cout << "ջ��������" << endl;
	}
	else
	{
		S.top=S.base;
	}
	return OK;
}

//��ջSΪ��ջ���򷵻�TRUE�����򷵻�FALSE
Status StackEmpty(SqStack S)
{
	if(!S.base)
	{
		cout << "ջ�����ڣ�����Ҳ�ǿ�ջ" << endl;
		return TRUE;
	}
	else
	{
		if(S.top==S.base)
			return TRUE;
		else
			return FALSE;
	}	
}

//����S��Ԫ�ظ�������ջ�ĳ���
int StackLength(SqStack S)
{
	return S.top-S.base;		
}

//��ջ���գ�����e����S��ջ��Ԫ�أ�������OK�����򷵻�ERROR
Status GetTop(SqStack S, int &e)
{
	if(S.top==S.base)
		return ERROR;
	
	e=*(S.top-1);

	return OK;
}

//����Ԫ��eΪ�µ�ջ��Ԫ��
Status Push(SqStack &S, int e)
{
	if(S.top-S.base>=S.stacksize)
	{
		S.base=(int *)realloc(S.base, (S.stacksize + STACKINCREMENT) * sizeof(int));
		
		if(!S.base)
			exit(OVERFLOW);

		S.top=S.base + S.stacksize;
		S.stacksize += STACKINCREMENT;
	}

	*S.top++ = e;

	return OK;
}

//��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK�����򷵻�ERROR
Status Pop(SqStack &S, int &e)
{
	if(S.top==S.base)
		return ERROR;
	
	e=*--S.top;
	
	return OK;
}

//ջ��Ԫ�صķ��ʺ���
int myvisit()
{
	cout << "�ѱ�����!" << endl;
	return OK;
}

//��ջ�׵�ջ�����ζ�ջ��ÿ��Ԫ�ص��ú���visit()��һ��visit()ʧ�ܣ������ʧ��
Status StackTraverse(SqStack S, int ( *visit)())
{
	int e;
	while(!StackEmpty(S))
	{
		Pop(S,e);
		(*visit)();
	}

	return OK;
}