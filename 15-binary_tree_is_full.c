#include "binary_trees.h"

/**
 * recursive - func
 * @tree: val
 * Return: always
 */

int recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left && !tree->right) ||
		    (!tree->left && tree->right) ||
		   recursive(tree->left) == 0 ||
		   recursive(tree->right) == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * binary_tree_is_full - func
 * @tree: val
 * Return: always
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		return (recursive(tree));
	}
	return (0);
}
