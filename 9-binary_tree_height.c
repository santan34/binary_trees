#include "binary_trees.h"
/**
 * max - measures the height of a binary tree
 * @tree: pointer to tree
 * Return: height
 */
size_t max(const binary_tree_t *tree)
{
	int count1 = 0;
	int count2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		count1 += max(tree->left);
	if (tree->right != NULL)
		count2 += max(tree->right);
	if (count1 > count2)
		return (1 + count1);
	return (1 + count2);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((max(tree)) - 1);
}
