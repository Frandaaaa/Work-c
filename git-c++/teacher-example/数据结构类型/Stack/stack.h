/*****************************************************************
 ## �ļ�����stack.h
 ## ���ߣ�	Berkeley
 ## ���ܣ�	˳��ջ�Ķ����Լ������������
 ## �汾��	V1.0
 ****************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

#define STACK_INIT_SIZE 100 // �洢�ռ��ʼ������
#define STACKINCREMENT	10  // �洢�ռ��������

#define OK			0 
#define ERROR		1
#define OVERFLOW	2

#define FALSE		0 
#define TRUE		1

typedef int Status;  // ���Ͷ���

typedef struct {
	int *base;		// ��ջ����֮ǰ������֮��base��ֵΪnull
	int *top;		// ջ��ָ��
	int stacksize;	// ��ǰ�ѷ���Ĵ洢�ռ䣬��Ԫ��Ϊ��λ
}SqStack;

//***********ջ����������********************************************
//����һ����ջ
Status InitStack(SqStack &S);

//����ջS��S���ٴ���
Status DestroyStack(SqStack &S);

//��S��Ϊ��ջ
Status ClearStack(SqStack &S);

//��ջSΪ��ջ���򷵻�TRUE�����򷵻�FALSE
Status StackEmpty(SqStack S);

//����S��Ԫ�ظ�������ջ�ĳ���
int StackLength(SqStack S);

//��ջ���գ�����e����S��ջ��Ԫ�أ�������OK�����򷵻�ERROR
Status GetTop(SqStack S, int &e);

//����Ԫ��eΪ�µ�ջ��Ԫ��
Status Push(SqStack &S, int e);

//��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK�����򷵻�ERROR
Status Pop(SqStack &S, int &e);

//ջ��Ԫ�صķ��ʺ���
int myvisit();

//��ջ�׵�ջ�����ζ�ջ��ÿ��Ԫ�ص��ú���visit()��һ��visit()ʧ�ܣ������ʧ��
Status StackTraverse(SqStack S, int ( *visit)());