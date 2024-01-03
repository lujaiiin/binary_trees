#include "binary_trees.h"

/**
 * binary_tree_node - function
 * @parent: value
 * @value: value 2
 * Return: Always
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ja;

	ja = malloc(sizeof(binary_tree_t));
	if (!ja)
	{
		return (NULL);
	}
	ja->n = value;
	ja->parent = parent;
	ja->left = NULL;
	ja->right = NULL;

	return (ja);
}
