#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef int SLTData;

typedef struct SListNode
{
	SLTData data;
	struct SLTNode* next;

}SLTNode;


extern void SLTPushHead(SLTNode** pphead, SLTData x);
extern void SLTPushTail(SLTNode** pphead, SLTData x);
extern void SLTPushRandom(SLTNode** pphead, SLTData x, int pos);
extern void SLTPopHead(SLTNode** pphead);
extern void SLTPopTail(SLTNode* phead);
extern void SLTPopRandom(SLTNode** pphead, int pos);
extern SLTNode* FindSLTNode(SLTNode* phead, int pos);
extern void ChangeSLTNode(SLTNode* phead, int pos, SLTData x);
extern SLTData* CreatSLTNode(SLTData x);
extern void PrintSLTNode(SLTNode* phead);



int main1()
{
	SLTNode* phead = NULL;

	//尾插
	SLTPushTail(&phead, 1);
	SLTPushTail(&phead, 2);
	SLTPushTail(&phead, 3);
	SLTPushTail(&phead, 4);
	SLTPushTail(&phead, 5);
	//头插
	SLTPushHead(&phead, 3);
	SLTPushHead(&phead, 9);
	SLTPushHead(&phead, 0);
	//随机插
	SLTPushRandom(&phead, 6, 0);
	SLTPushRandom(&phead, 6, 2);
	//头删
	SLTPopHead(&phead);
	//尾删
	SLTPopTail(phead);
	//随机删
	SLTPopRandom(&phead, 1);
	//改
	ChangeSLTNode(phead, 1, 999);
	//打印测试
	PrintSLTNode(phead);



	return 0;
}


//            增
//1.头插

void SLTPushHead(SLTNode** pphead, SLTData x)
{

	SLTNode* newNode = CreatSLTNode(x);

	newNode->next = *pphead;
	*pphead = newNode;

}

//2.尾插

void SLTPushTail(SLTNode** pphead, SLTData x)
{
	SLTNode* newNode = CreatSLTNode(x);

	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else if ((*pphead)->next == NULL)
	{
		(*pphead)->next = newNode;
	}
	else
	{
		SLTNode* cut = *pphead;

		while (cut->next != NULL)
		{
			cut = cut->next;
		}

		cut->next = newNode;

	}
}

//3.随机插

void SLTPushRandom(SLTNode** pphead, SLTData x,int pos)
{
	SLTNode* newNode = CreatSLTNode(x);
	if (pos == 0)
	{
		SLTPushHead(pphead,x);
	}
	else
	{
		SLTNode* cut = FindSLTNode(*pphead, pos);
		newNode->next = cut->next;
		cut->next = newNode;

	}


}

//            删
//1.头删

void SLTPopHead(SLTNode** pphead)
{
	SLTNode* cut = *pphead;

	if (!(*pphead))
	{
		return;
	}
	else
	{
		*pphead = cut->next;
		free(cut);
	}
	
}

//2.尾删
void SLTPopTail(SLTNode* phead)
{
	SLTNode* cut = phead;
	if (!phead)
	{
		printf("尾删->空链表失败");
		return;
	}
	while (phead->next != NULL)
	{
		cut = phead;
		phead = phead->next;
	}
	free(phead);
	cut->next = NULL;
}

//3.随机删

void SLTPopRandom(SLTNode** pphead,int pos)
{
	if (pos == 0)
	{
		SLTPopHead(pphead);
	}
	else
	{
		if (*pphead == NULL)
		{
			printf("随即删除->空链表失败");
		}
		else
		{
			SLTNode* cut = FindSLTNode(*pphead, pos);
			if (cut->next == NULL)
			{
				return;
			}
			else
			{
				SLTNode* next = cut->next;
				cut->next = next->next;
				free(next);
			}
			
		}
	}
}

//查

SLTNode* FindSLTNode(SLTNode* phead, int pos)
{
	int count = 1;
	SLTNode* pre = phead;
	if (!phead)
	{
		printf("空链表查找失败");
	}
	else
	{
		while (pre->next != NULL)
		{
			count++;
			pre = pre->next;
		}
		if (pos > count && pos <= 0)
		{
			printf("查找失败->节点越界插入");
			return;
		}
		for (int i = 0; i < pos - 1; i++)
		{
			phead = phead->next;
		}
		return phead;
	}
	
}


//改
void ChangeSLTNode(SLTNode* phead, int pos,SLTData x)
{
	SLTNode* cut = FindSLTNode(phead,pos);
	cut->data = x;
}

//工具辅助类

//创建Node

SLTData* CreatSLTNode(SLTData x)
{
	SLTNode* newNode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newNode == NULL)
	{
		printf("动态内存开辟失败");
		return;
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;

}

//打印链表

void PrintSLTNode(SLTNode* phead)
{
	while (phead)
	{
		printf("%d->", phead->data);
		phead = phead->next;
	}
	printf("NULL");

}

