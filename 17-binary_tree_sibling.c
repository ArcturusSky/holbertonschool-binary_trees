#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds
 * the sibling of a node in a binary tree
 * using "in-order" traversal.
 * @node: pointer to tree root
 *
 * Return: a pointer to the sibling, NULL otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent != NULL && node != NULL)
	{
		if (node->parent->left == node
		&& node->parent->right != NULL)
		{
			return (node->parent->right);
		}
		else if (node->parent->right == node
		&& node->parent->left != NULL)
		{
			return (node->parent->left);
		}
	}
	return (NULL);
}
