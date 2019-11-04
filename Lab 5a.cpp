#include <iostream>
#include "IntBinaryTree.h"

using namespace std;

int main(void)
{
	IntBinaryTree tree;

	cout << "Inserting nodes. ";
	tree.insertNode(3);
	tree.insertNode(50);
	tree.insertNode(15);
	tree.insertNode(28);
	tree.insertNode(1);
	tree.insertNode(23);
	tree.insertNode(221);
	cout << "Done\n";
}
