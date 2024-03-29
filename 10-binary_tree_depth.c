#include "binary_trees.h"
int ocd(const binary_tree_t *tree);
/**
 * binary_tree_depth - measures the depth of a binary tree to a point
 * @tree: pointer to tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (ocd(tree));
}
/**
 * ocd - depth of a binary tree to a point
 * @tree: pointer to tree
 * Return: depth
 */
int ocd(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		count += 1;
		tree = tree->parent;
	}
	return (count);
}
