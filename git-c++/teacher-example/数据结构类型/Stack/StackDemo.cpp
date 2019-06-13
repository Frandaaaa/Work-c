/*****************************************************************
 ## �ļ�����StackDemo.cpp
 ## ���ߣ�	Berkeley
 ## ���ܣ�	˳��ջ�Ķ����Լ������
 ## �汾��	V1.0
 ****************************************************************/

#include "stack.h"

int main()
{
	SqStack S;
	if(ERROR == InitStack(S))
		cout << "ջ��ʼ��ʧ�ܣ�" << endl;
	else
		cout << "ջ��ʼ���ɹ���" << endl;
	
	if(TRUE==StackEmpty(S))
		cout << "ջ�գ�" << endl;
	else
		cout << "ջ���գ�" << endl;

	cout << "��0-9��Ԫ�ؽ�ջ" << endl;
	for(int i=0; i<10; i++)
		Push(S, i);
	
	if(TRUE==StackEmpty(S))
		cout << "ջ�գ�" << endl;
	else
		cout << "ջ���գ�" << endl;

	int e;
	GetTop(S, e);
	cout << "ջ��Ԫ��Ϊ�� " << e << endl;

	for(int j=0; j<3; j++)
	{
		Pop(S, e);
		cout << "��ջԪ��Ϊ�� " << e << "  ";
	}
	cout << endl;
	
	GetTop(S, e);
	cout << "ջ��Ԫ��Ϊ�� " << e << endl;

	cout << "ջ�ĳ����ǣ� " << StackLength(S) << endl;

	cout << "��ջ��գ� " << endl;
	ClearStack(S);
	if(TRUE==StackEmpty(S))
		cout << "ջ�գ�" << endl;
	else
		cout << "ջ���գ�" << endl;

	cout << "��10��Ԫ�ؽ�ջ" << endl;
	for( i=0; i<10; i++)
		Push(S, i*2);
	if(TRUE==StackEmpty(S))
		cout << "ջ�գ�" << endl;
	else
		cout << "ջ���գ�" << endl;	
	StackTraverse(S, myvisit);

	cout << "����ջ" << endl;
	DestroyStack(S);
	if(TRUE==StackEmpty(S))
		cout << "ջ�գ�" << endl;
	else
		cout << "ջ���գ�" << endl;	

	StackTraverse(S, myvisit);

	return 0;
}