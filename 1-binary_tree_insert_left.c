#include "binary_trees.h"

/**
 * binary_tree_insert_left - function
 * @parent: val
 * @value: val2
 * Return: always
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ja;

	if (!parent)
	{
		return (NULL);
	}
	ja = binary_tree_node(parent, value);
	if (!ja)
	{
		return (NULL);
	}
	if (parent->left)
	{
		ja->left = parent->left;
		parent->left->parent = ja;
	}
	parent->left = ja;
	return (ja);
}
