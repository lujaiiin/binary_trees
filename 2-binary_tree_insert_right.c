#include "binary_trees.h"

/**
 * binary_tree_insert_right - function
 * @parent: val
 * @value: val2
 * Return: always
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right)
	{
		ja->right = parent->right;
		parent->right->parent = ja;
	}
	parent->right = ja;
	return (ja);
}
