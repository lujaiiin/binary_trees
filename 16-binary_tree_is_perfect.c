#include "binary_trees.h"

/**
 * calc_side_size - func
 * @tree: val
 * Return: always
 */

int cs(const binary_tree_t *tree)
{
	int le = 0;
	int ri = 0;

	if (tree == NULL)
	{
		return (-1);
	}
	if (tree->left)
	{
		le += 1 + cs(tree->left);
	}
	if (tree->right)
	{
		ri += 1 + cs(tree->right);
	}
	return (le + ri);
}

/**
 * binary_tree_is_perfect - func
 * @tree: val
 * Return: always
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l;

	if (tree)
	{
		l = 1 + cs(tree->left);
	       	l -= 1 + cs(tree->right);
		return (l == 0 ? 1 : 0);
	}
	return (0);
}
