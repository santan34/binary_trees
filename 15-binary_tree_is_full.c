#include "binary_trees.h"
int helper(const binary_tree_t *tree);
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full, otherwise 0. If tree is NULL, return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree  == NULL)
		return (0);
	if (helper(tree))
		return (1);
	return (0);
}
/**
 * helper - helps find the full
 * @tree: pointer to the node
 * Return: True / False
 */
int helper(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
	{
		return (helper(tree->left) && helper(tree->right));
	}
	return (0);
}
