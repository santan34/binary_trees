#include "binary_trees.h"
int max(const binary_tree_t *tree);
/**
 * binary_tree_balance - caluclates the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor of
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (max(tree->left) - max(tree->right));
}
/**
 * max - finds the max height per side
 * @tree: pointer to the root node of the tree to measure the balance factor of
 * Return: the max node pers side
 */
int max(const binary_tree_t *tree)
{
	int count = 0;
	int cs = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		count += max(tree->left);
	if (tree->right != NULL)
		cs += max(tree->right);
	if (count > cs)
		return (count + 1);
	return (cs + 1);
}
