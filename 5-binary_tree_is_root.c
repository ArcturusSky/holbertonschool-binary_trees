#include "binary_trees.h"

/**
 * binary_tree_is_root -  function that checks if a node is a root
 * @node: pointer to the node to test
 * Return: 1 if node is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
		{
			return (1);
		}
	}
	return (0);
}
