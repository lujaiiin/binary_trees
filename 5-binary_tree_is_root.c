#include "binary_trees.h"

/**
 * binary_tree_is_root - function
 * @node: poi
 * Return: always
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent || !node)
	{
		return (0);
	}
	return (1);
}
