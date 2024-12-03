#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//ջ����
typedef int STKData;

typedef struct stack
{
	STKData* vessel;
	int size;
	int cap;
}stack;


//���ж���
typedef int QueueData;
typedef struct QueueNode
{
	QueueData data;
	struct Queue* next;

}QueueNode;

//����ͷβָ��
typedef struct Pqueue
{
	QueueNode* phead;
	QueueNode* ptail;

}Pqueue;



//ջ
extern void TestStack();
extern void initStack(stack* s);
extern void PrintStackTop(stack* s);
extern void StackPush(stack* s, STKData x);
extern void StackPop(stack* s);
extern int JudgeIfStack(stack* s);



//����
extern void TestQueue();
extern void InitQueue(Pqueue* pq);
extern void QueuePush(Pqueue* pq, QueueData x);
extern void PrintQueueFront(Pqueue* pq);
extern void QueuePop(Pqueue* pq);
extern int JugdeIfQueue(Pqueue* pq);




int main2()
{
	TestStack();
	//TestQueue();

	return 0;
}


//���в���
void TestQueue()
{
	Pqueue pq;
	InitQueue(&pq);


	QueuePush(&pq, 6);
	QueuePush(&pq, 7);
	PrintQueueFront(&pq);
	QueuePop(&pq);
	QueuePush(&pq, 8);
	PrintQueueFront(&pq);
	QueuePop(&pq);
	QueuePush(&pq, 9);
	PrintQueueFront(&pq);
	QueuePop(&pq);
	QueuePush(&pq, 10);
	

	while (!JugdeIfQueue(&pq))
	{
		PrintQueueFront(&pq);
		QueuePop(&pq);
	}




}



//��ʼ������
void InitQueue(Pqueue* pq)
{
	assert(pq);
	pq->phead = pq->ptail = NULL;

}
//���
void QueuePush(Pqueue* pq,QueueData x)
{
	assert(pq);

	QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));

	assert(newNode);

	newNode->data = x;

	if (pq->phead == NULL)
	{
		pq->phead = pq->ptail = newNode;
	}
	else
	{
		pq->ptail->next = newNode;
		pq->ptail = pq->ptail->next;
	}


}
//����
void QueuePop(Pqueue* pq)
{
	assert(pq);
	assert(pq->phead);

	if (pq->phead == pq->ptail)
	{
		free(pq->phead);
		pq->ptail = pq->phead = NULL;
	}
	else
	{
		QueueNode* cut = pq->phead;
		pq->phead = pq->phead->next;
		free(cut);
	}
	
}



//�ж϶ӿ�
int JugdeIfQueue(Pqueue* pq)
{
	assert(pq);

	return pq->phead == NULL;
}


//��ӡ��ͷ
void PrintQueueFront(Pqueue* pq)
{

	printf("%d ", pq->phead->data);

}








//ջ����
void TestStack()
{
	stack s;
	int n = 50000;
	initStack(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	
	StackPush(&s, 3);
	
	StackPush(&s, 4);
	StackPush(&s, 5);
	StackPush(&s, 6);
	StackPush(&s, 7);

	while (n--)
	{
		StackPush(&s, 7);
	}

	while (!JudgeIfStack(&s))
	{
		PrintStackTop(&s);
		StackPop(&s);
	}
}



//��ʼ��ջ

void initStack(stack* s)
{
	assert(s);
	s->size = 0;
	s->cap = 4;
	s->vessel = (STKData*)malloc((sizeof(STKData) * (s->cap)));
}

//ѹջ
void StackPush(stack* s,STKData x)
{
	assert(s);
	if (s->size >= s->cap)
	{
		STKData* tmp =  (STKData*)realloc(s->vessel, sizeof(STKData) * 2 * (s->cap));
		assert(tmp);
		s->vessel = tmp;
		s->cap *= 2;
	}

	s->vessel[s->size] = x;
	s->size++;

}


//��ջ
void StackPop(stack* s)
{
	if (s->size > 0)
	{
		s->size--;
	}
}

//�ж�ջ��
int JudgeIfStack(stack* s)
{
	return s->size == 0;
}

//ȡջ������
void PrintStackTop(stack* s)
{
	assert(s);
	assert(s->vessel);
	if (s->size > 0)
	{
		printf("%d ", s->vessel[s->size - 1]);
	}
	else
	{
		printf("��ջ");
	}
}








