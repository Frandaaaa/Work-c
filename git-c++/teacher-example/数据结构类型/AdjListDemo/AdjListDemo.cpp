/*****************************************************
 * �����ߣ�Berkeley
 * ���ܣ�ͼ���ڽӱ�洢��ʾ�Լ���Ⱥ͹�ȱ�����ʾ
 * �汾��1.0
 *****************************************************/

#include <iostream>
#include <string>
#include <queue>

using namespace std;

#define MAX_VERTEX_NUM	10
#define INFINITY		0XFFFFFFFF
#define SUCCESS			1
#define UNSUCCESS		0

typedef int Status;	//���Ͷ���
bool visited[MAX_VERTEX_NUM]; //ȫ�����飬��¼����Ƿ��ѱ�����

typedef int ArcWeight;		//�û���Ȩֵ����
typedef struct ArcNode  
{
	int adjvex;				//�û���ָ��Ķ����λ��
	ArcWeight weight;		//Ȩֵ
	struct ArcNode* nextarcs;	//ָ����һ������ָ��

}ArcNode;

typedef string VertexType;	//��������
typedef struct VNode
{
	VertexType data;		//������Ϣ
	ArcNode* firstarc;		//ָ�������ö���ĵ�һ������ָ��
}VNode, AdjList[MAX_VERTEX_NUM];//�ڽӱ�

typedef struct  
{
	AdjList vertices;	//�ڽӱ�
	int vexnum;			//�������
	int arcnum;			//����
	//ͼ��������ʱ����
}ALGraph;


//�ɶ���ֵ�õ���������
int LocateVex( const ALGraph& G, VertexType val )
{
	for ( int i = 0; i < G.vexnum; ++i )
	{
		if ( val == G.vertices[i].data )
			return i;
	}
	return -1; // ������-1
}

//��������ͼ
Status CreateAdjListGraph( ALGraph& G )
{
	int i;
	cout << "���붥������Լ�������";
	cin >> G.vexnum >> G.arcnum;
	cout << endl;
	cout << "������ " << G.vexnum << " ������:(ʾ����v0 v1 v2 v3 �س�)";
	for ( i = 0; i < G.vexnum; ++i )
	{
		cin >> G.vertices[i].data; // ���붥����Ϣ(v0)
		G.vertices[i].firstarc = NULL; // ��ʼ����һ����ΪNULL
	}

	cout << "�����������㹹�ɵı�( " << G.arcnum << " ��):��ʾ��v0 v1 �س� v0 v2 �س���\n";
	for ( i = 0; i < G.arcnum; ++i )
	{
		VertexType first; //�û��ĵ�һ�����㣨����ͼΪ��β��
		VertexType second;//�û��ĵڶ������㣨����ͼΪ��ͷ��
		cin >> first >> second;
		int m = LocateVex( G, first );//���ظö����Ӧ������
		int n = LocateVex( G, second ); //���ظö����Ӧ������
		if ( m == -1 || n == -1 )//����ֵ�Ƿ����ö��㲻���ڣ���������
			return UNSUCCESS;

		ArcNode* pEdgeNode = new ArcNode;
		pEdgeNode->adjvex = n;
		pEdgeNode->weight = 0;  //Ȩֵ��ʱ����

		//��ͷ���뷨
		pEdgeNode->nextarcs = G.vertices[m].firstarc;//���ö�����ָ�ĵ�����ֱ�Ӹ�����ǰ������
		G.vertices[m].firstarc = pEdgeNode;//����ǰ���Ľڵ�ṹ����firstarc
	}
	return SUCCESS;
}


//����ͼ
void DestroyGraph( ALGraph& G )
{
	for ( int i = 0; i < G.vexnum; ++i )
	{
		ArcNode* pEdge = G.vertices[i].firstarc;
		while( pEdge )
		{
			ArcNode* q = pEdge;
			pEdge = pEdge->nextarcs;
			delete q;
		}
		G.vertices[i].firstarc = NULL;
	}
	G.vexnum = 0;
	G.arcnum = 0;
}


//�õ�����Ķ�
int GetVertexDegree(  const ALGraph& G, VertexType val )
{
	int m = LocateVex( G, val );//�õ�������±�
	int iCount = 0; //����Ķ�

	for ( int i = 0; i < G.vexnum; ++i )
	{
		if ( i == m )
		{
			ArcNode* pEdgeOut = G.vertices[i].firstarc;
			while ( pEdgeOut ) 
			{
				++iCount;//�ۼӳ���
				pEdgeOut = pEdgeOut->nextarcs;
			}
		}
		else
		{
			ArcNode* pEdgeIn = G.vertices[i].firstarc;
			while ( pEdgeIn )
			{
				if ( pEdgeIn->adjvex == m )
					++iCount;   //�ۼ����
				pEdgeIn = pEdgeIn->nextarcs;
			}
		}
	}
	return iCount;
}


//������ȱ���ͼ
void DFS( const ALGraph& G, int i )
{
	cout << G.vertices[i].data << " ";
	visited[i] = true;

	ArcNode* pEdge = G.vertices[i].firstarc;
	while( pEdge )
	{
		int j = pEdge->adjvex;
		if ( !visited[j] )
		{
			DFS( G, j);
		}
		pEdge = pEdge->nextarcs;
	}
}
void DFSTraverse( const ALGraph& G )
{
	int i;
	for (i = 0; i < G.vexnum; ++i )
	{
		visited[i] = false;
	}

	for (i = 0; i < G.vexnum; ++i )
	{
		if ( !visited[i] )
			DFS( G, i );
	}
}

//������ȱ���
void BFSTraverse( const ALGraph& G )
{
	int i; 
	for (i = 0; i < G.vexnum; ++i )
	{
		visited[i] = false;
	}

	queue<int> Q;
	for (i = 0; i < G.vexnum; ++i )
	{
		if ( !visited[i] )
		{
			cout << G.vertices[i].data << " ";
			visited[i] = true;
			Q.push( i );
			while( !Q.empty() )
			{
				int iVex = Q.front();
				Q.pop();

				ArcNode* pEdge = G.vertices[iVex].firstarc;
				while ( pEdge )
				{
					if ( !visited[pEdge->adjvex] )
					{
						cout << G.vertices[pEdge->adjvex].data << " ";
						visited[pEdge->adjvex] = true;
						Q.push( pEdge->adjvex );
					}
					pEdge = pEdge->nextarcs;
				}
			}
		}
	}
}

int main()
{
	//��������ͼ
	cout << "�ڽӱ�洢��ͼ��ʵ�ֵĹ����У�����ͼ��������ȱ�����������ȱ����Լ���ڵ�Ķ�\n" << endl;
	cout << "��������ͼG" << endl;
	ALGraph G;
	CreateAdjListGraph( G );

	cout << "������ȱ���ͼG: ";
	//������ȱ���ͼ
	DFSTraverse( G );
	cout << endl << endl;
	
	cout << "������ȱ���ͼG: ";
	//������ȱ���ͼ
	BFSTraverse( G );
	cout << endl << endl;

	//���Ķ�
	cout << "������ȵĽ��:";
	VertexType v;
	cin >> v;
	cout << "��Ϊ��" << GetVertexDegree( G, v ) << endl;

	//��������ͼ
	DestroyGraph( G );

	return 0;
} 