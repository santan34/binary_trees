#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal method
 * @tree: pointer to root node
 * @func: pointer to a print function
 * Return:  measure the depth
 */
 void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
