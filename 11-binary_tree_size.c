#include "binary_trees.h"

/**
 * binary_tree_size - Function that count the size of a binary tree
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeleft, sizeright;

	if (tree != NULL)
	{
		sizeleft = binary_tree_size(tree->left);
		/** Visit left subtree */

		sizeright = binary_tree_size(tree->right);
		/** Visit right subtree */

		return ((sizeleft + sizeright) + 1);
	}

	return (0);
}
