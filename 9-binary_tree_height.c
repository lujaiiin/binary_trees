#include "binary_trees.h"

/**
 * binary_tree_height - func
 * @tree: val
 * Return: always
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lef = 0;
	size_t rai = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
		lef += 1 + binary_tree_height(tree->left);
		if (tree->right != NULL)
		rai += 1 + binary_tree_height(tree->right);

		return ((lef > rai) ? lef : rai);
	}
	return (0);
}
