#include "binary_trees.h"

/**
 * binary_tree_postorder - function goes throughh a binary tree
 * using "post-order" traversal.
 * @tree: pointer to tree root
 * @func: pointer to function to execute with node value
 *
 * Return: 1 if node is tree, 0 otherwise
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		/** Visit left subtree */
		binary_tree_postorder(tree->right, func);
		/** Visit right subtree */
		func(tree->n);

	}
}
