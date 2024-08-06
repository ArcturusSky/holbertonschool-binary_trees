#include "binary_trees.h"

/**
 * binary_tree_inorder - function goes throughh a binary tree
 * using "in-order" traversal.
 * @tree: pointer to tree root
 * @func: pointer to function to execute with node value
 *
 * Return: 1 if node is tree, 0 otherwise
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		/** Visit left subtree */
		func(tree->n);
		binary_tree_inorder(tree->right, func);
		/** Visit right subtree */
	}
}
