#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a tree
 * @tree: pointer to node root
 * Return:  measure the height.
 */
int max(const binary_tree_t *node);
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (max(tree) - 1);
}
/**
 * max - helper
 * @node: pointer to node
 * Return: measure the height.
 */
int max(const binary_tree_t *node)
{
	static int leftd;
	static int rightd;

	if (node == NULL)
		return (0);
	else
	{
		leftd = max(node->left);
		rightd = max(node->right);
		if (leftd > rightd)
			return (leftd + 1);
		else
			return (rightd + 1);
	}
}
