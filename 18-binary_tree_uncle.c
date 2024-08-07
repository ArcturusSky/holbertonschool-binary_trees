#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds
 * the uncle of a node in a binary tree
 * @node: pointer to tree root
 *
 * Return: a pointer to the uncle, NULL otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node->parent != NULL && node != NULL &&
	node->parent->parent != NULL)
	{
		if (node->parent->parent->left == NULL
		|| node->parent->parent->right == NULL)
		{
			return (NULL);
		}
		if (node->parent == node->parent->parent->left)
		{
			return (node->parent->parent->right);
		}
		else if (node->parent == node->parent->parent->right)
		{
			return (node->parent->parent->left);
		}
	}
	return (NULL);
}
