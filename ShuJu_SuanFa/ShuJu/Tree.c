#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


typedef  char BTDataType;

 typedef struct BinTreeNode
{
	struct BinTreeNode* left;
	struct BinTreeNode* right;
	BTDataType data;
}BTNode;

 extern void prevOrder(BTNode* tree);
 extern BTNode* InItBinTree();
 extern void inOrder(BTNode* tree);
 extern void postOrder(BTNode* tree);
 extern int SizeBinTreeNode(BTNode* tree);
 extern int SizeofLeafTreeNode(BTNode* tree);


int main()
{
	BTNode* a = InItBinTree();
	prevOrder(a);
	printf("\n");
	inOrder(a);
	printf("\n");
	postOrder(a);
	printf("\n");

	printf("%d \n", SizeBinTreeNode(a));
	printf("%d\n", SizeofLeafTreeNode(a));
	return 0;
}

//初始化
BTNode* InItBinTree()
{
	BTNode* a = (BTNode*)malloc(sizeof(BTNode));
	a->data = 'A';
	a->left = NULL;
	a->right = NULL;
	
	BTNode* b = (BTNode*)malloc(sizeof(BTNode));
	b->data = 'B';
	b->left = NULL;
	b->right = NULL;

	BTNode* c = (BTNode*)malloc(sizeof(BTNode));
	c->data = 'C';
	c->left = NULL;
	c->right = NULL;
	
	BTNode* d = (BTNode*)malloc(sizeof(BTNode));
	d->data = 'D';
	d->left = NULL;
	d->right = NULL;

	BTNode* e = (BTNode*)malloc(sizeof(BTNode));
	e->data = 'E';
	e->left = NULL;
	e->right = NULL;


	a->left = b;
	a->right = c;
	b->left = d;
	b->right = e;

	return a;
}

//前序
void prevOrder(BTNode* tree)
{
	if (tree == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", tree->data);
	prevOrder(tree->left);
	prevOrder(tree->right);
}
//中序
void inOrder(BTNode* tree)
{
	if (tree == NULL)
	{
		printf("NULL ");
		return 0;
	}

	inOrder(tree->left);
	printf("%c ", tree->data);
	inOrder(tree->right);
}
//后序

void postOrder(BTNode* tree)
{
	if (tree == NULL)
	{
		printf("NULL ");
		return NULL;
	}

	postOrder(tree->left);
	postOrder(tree->right);
	printf("%c ", tree->data);
}

//计算节点个数  分治思想

int SizeBinTreeNode(BTNode* tree)
{
	if (tree == NULL)
	{
		return 0;
	}
	return 1 + SizeBinTreeNode(tree->left) + SizeBinTreeNode(tree->right);
}

//计算叶子节点个数

int SizeofLeafTreeNode(BTNode* tree)
{
	if (tree == NULL)
	{
		return 0;
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return 1;
	}
	else
	{
		return SizeofLeafTreeNode(tree->left) + SizeofLeafTreeNode(tree->right);
	}
}