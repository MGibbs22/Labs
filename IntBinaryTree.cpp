#include "IntBinaryTree.h"
#include <iostream>

using namespace std;


void IntBinaryTree::insertNode(int num)
{
	TreeNode* newNode,	// Pointer to a new node
		* nodePtr;	// Pointer to traverse the tree

		// Create a new node
	newNode = new TreeNode;
	newNode->value = num;
	newNode->left = newNode->right = NULL;
	if (!root)
	{	// Is the tree empty?
		root = newNode;
	}
	else
	{
		nodePtr = root;
		while (nodePtr != NULL)
		{
			if (num < nodePtr->value)
			{
				if (nodePtr->left)
				{
					nodePtr = nodePtr->left;
				}
				else
				{
					nodePtr->left = newNode;
					break;
				}
			}
			else if (num > nodePtr->value)
			{
				if (nodePtr->right)
				{
					nodePtr = nodePtr->right;
				}
				else
				{
					nodePtr->right = newNode;
					break;
				}
			}
			else
			{
				cout << "Duplicate the value found in tree\n";
				break;
			}
		}
	}
}

void IntBinaryTree::displayInOrder(TreeNode* nodePtr)
{
	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}

void IntBinaryTree::displayPreOrder(TreeNode* nodePtr)
{
	if (nodePtr)
	{
		cout << nodePtr->value << endl;
		displayPreOrder(nodePtr->left);
		displayPreOrder(nodePtr->right);
	}
}

void IntBinaryTree::displayPostOrder(TreeNode* nodePtr)
{
	if (nodePtr)
	{
		displayPostOrder(nodePtr->left);
		displayPostOrder(nodePtr->right);
		cout << nodePtr->value << endl;
	}
}
