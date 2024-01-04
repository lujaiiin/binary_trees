#include "binary_trees.h"

/**
 * binary_tree_depth - func
 * @tree: val
 * Return: always
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d;
	binary_tree_t *t;

	if (tree)
	{
		for(t = tree->parent; t; d++, t = t->parent);
		return (d);
	}

	return (0);
}
