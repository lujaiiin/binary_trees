#include "binary_trees.h"

/**
 * binary_tree_size - func
 * @tree: val
 * Return: alw
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t haj = 0;

	if (tree != NULL)
	{
		haj++;
		haj += binary_tree_size(tree->left);
		haj += binary_tree_size(tree->right);
	}

	return (haj);
}
