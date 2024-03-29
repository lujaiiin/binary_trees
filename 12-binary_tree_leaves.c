#include "binary_trees.h"

/**
 * binary_tree_leaves - func
 * @tree: val
 * Return: always
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree != NULL)
	{
		l += (!tree->left && !tree->right) ? 1 : 0;
		l += binary_tree_leaves(tree->right);
		l += binary_tree_leaves(tree->left);
	}
	return (l);
}
