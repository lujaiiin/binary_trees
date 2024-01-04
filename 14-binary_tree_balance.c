#include "binary_trees.h"

/**
 * binary_tree_balance - fun
 * @tree: val
 * Return: always
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}

/**
 * binary_tree_height - func
 * @tree: val
 * Return: always
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lef = 0, rai = 0;

	if (tree != NULL)
	{
		lef = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rai = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lef > rai) ? lef : rai);
	}
	return (0);
}
