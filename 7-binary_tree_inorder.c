#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through tree using inorder traversal method
 * @tree: pointer to root node
 * @func: pointer to a print function
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
