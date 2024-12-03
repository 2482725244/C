#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//栈定义
typedef int STKData;

typedef struct stack
{
	STKData* vessel;
	int size;
	int cap;
}stack;


//队列定义
typedef int QueueData;
typedef struct QueueNode
{
	QueueData data;
	struct Queue* next;

}QueueNode;

//队列头尾指针
typedef struct Pqueue
{
	QueueNode* phead;
	QueueNode* ptail;

}Pqueue;



//栈
extern void TestStack();
extern void initStack(stack* s);
extern void PrintStackTop(stack* s);
extern void StackPush(stack* s, STKData x);
extern void StackPop(stack* s);
extern int JudgeIfStack(stack* s);



//队列
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


//对列测试
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



//初始化队列
void InitQueue(Pqueue* pq)
{
	assert(pq);
	pq->phead = pq->ptail = NULL;

}
//入队
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
//出队
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



//判断队空
int JugdeIfQueue(Pqueue* pq)
{
	assert(pq);

	return pq->phead == NULL;
}


//打印队头
void PrintQueueFront(Pqueue* pq)
{

	printf("%d ", pq->phead->data);

}








//栈测试
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



//初始化栈

void initStack(stack* s)
{
	assert(s);
	s->size = 0;
	s->cap = 4;
	s->vessel = (STKData*)malloc((sizeof(STKData) * (s->cap)));
}

//压栈
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


//出栈
void StackPop(stack* s)
{
	if (s->size > 0)
	{
		s->size--;
	}
}

//判断栈空
int JudgeIfStack(stack* s)
{
	return s->size == 0;
}

//取栈顶数据
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
		printf("空栈");
	}
}








