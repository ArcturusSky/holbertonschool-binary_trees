#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  function that checks if a node is a leaf
 * @node: pointer to the node to test
 * Return: 1 if node is leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	binary_tree_t *is_leaf = node;

	if (is_leaf != NULL)
	{
		if (is_leaf->left != NULL && is_leaf->right != NULL)
		{
			return (1);
		}
	}
	return (0);
}
