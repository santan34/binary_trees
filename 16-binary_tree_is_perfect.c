#include "binary_trees.h"
#include <stdbool.h>
int depth(const binary_tree_t *tree);
bool is_perfect(const binary_tree_t *tree, int d, int level);

/**
 */
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree->left)
	{
		d += 1;
		tree = tree->left;
	}
	return d;
}

bool is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (true);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (d == level + 1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (false);
	}
	return (is_perfect(tree->left, d, level + 1) &&	(is_perfect(tree->right, d, level + 1)));
}


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = 0;

	d = depth(tree);
	if (is_perfect(tree, d, 0))
		return (1);
	return (0);
}
