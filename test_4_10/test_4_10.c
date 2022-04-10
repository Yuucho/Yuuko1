#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int BTDataType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

BTNode* BuyBTNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	node->data = x;
	node->left = node->right = NULL;
	return node;
}

BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyBTNode(1);
	BTNode* node2 = BuyBTNode(2);
	BTNode* node3 = BuyBTNode(3);
	BTNode* node4 = BuyBTNode(4);
	BTNode* node5 = BuyBTNode(5);
	BTNode* node6 = BuyBTNode(6);

	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;

	return node1;
}

void PrevOrder(BTNode* root) 
{
	if (root == NULL) 
	{
		printf("NULL ");
		return;
	}
	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BTNode* root) 
{
	if (root == NULL) 
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

void PostOrder(BTNode* root){
	if (root == NULL){
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}

// 层序遍历
void LevelOrder(BTNode* root)
{
	BTNode *temp[100];   //创建pTreeNode指针类型的指针数组
	int in = 0;
	int out = 0;

	temp[in++] = root;  //先保存二叉树根节点 

	while (in > out)
	{
		if (temp[out])
		{
			printf("%d ", temp[out]->data);
			temp[in++] = temp[out]->left;
			temp[in++] = temp[out]->right;
		}
		else
		{
			printf("NULL ");
		}
		out++;
	}
}


int BTreeSize(BTNode* root)
{
	return root == NULL ? 0 :
		BTreeSize(root->left)
		+ BTreeSize(root->right) + 1;
}

int BTreeLeafSize(BTNode* root){
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return BTreeLeafSize(root->left) + 
		BTreeLeafSize(root->right);
}

// 第k层的节点的个数，k >= 1
int BTreeKLevelSize(BTNode* root, int k)
{
	assert(k >= 1);
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BTreeKLevelSize(root->left, k - 1)
		+ BTreeKLevelSize(root->right, k - 1);
}

int BTreeDepth(BTNode* root) {
	if (root == NULL)
		return 0;
	int leftDepth = BTreeDepth(root->left);
	int rightDepth = BTreeDepth(root->right);
	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}

BTNode* BinaryTreeFind(BTNode* root, BTDataType x) 
{
	if (!root)
		return NULL;
	if (root->data == x) 
		return root;
	if (BinaryTreeFind(root->left, x))
		return BinaryTreeFind(root->left, x);
	else
		return BinaryTreeFind(root->right, x);
}


int main()
{
	BTNode* tree = CreatBinaryTree();
	/*PrevOrder(tree);
	printf("\n");

	InOrder(tree);
	printf("\n");
	PostOrder(tree);
	printf("\n");*/
	/*printf("size:%d\n", BTreeSize(tree));*/
	/*printf("size:%d\n", BTreeSize(tree));
	printf("size:%d\n", BTreeSize(tree));*/

	/*printf("Ksize:%d\n", BTreeKLevelSize(tree, 3));*/
	/*printf("Depth size:%d\n", BTreeDepth(tree));*/
	/*LevelOrder(tree);
	printf("\n");*/
	BTNode * tmp=BinaryTreeFind(tree, 4);
	printf("%d ", tmp->data);
	return 0;
}


