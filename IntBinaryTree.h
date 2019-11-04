#pragma once
#include <cstddef>

class IntBinaryTree {
public:struct TreeNode
{
	int value;
	TreeNode* left;
	TreeNode* right;
};
	  TreeNode* root;
	  //void destroySubTree(TreeNode*);
	  void displayInOrder(TreeNode*);
	  void displayPreOrder(TreeNode*);
	  void displayPostOrder(TreeNode*);
public:
	IntBinaryTree()		// Constructor
	{
		root = NULL;
	}
	//~IntBinaryTree()	// Destructor
	//{
	//	destroySubTree(root);
	//}
	void insertNode(int);
	//bool searchNode(int);
	void showNodesInOrder(void)
	{
		displayInOrder(root);
	}
	void showNodesPreOrder()
	{
		displayPreOrder(root);
	}
	void showNodesPostOrder()
	{
		displayPostOrder(root);
	}
};



