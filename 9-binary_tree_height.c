#include "binary_trees.h"

/**
 * height_helper_left - Function that count the size
 * the left subtree of a binary tree
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

size_t height_helper_left(const binary_tree_t *tree)
{
	size_t sizeleft;

	if (tree != NULL)
	{
		sizeleft = height_helper_left(tree->left);
		/** Visit left subtree */

		return ((sizeleft) + 1);
	}

	return (0);
}

/**
 * height_helper_right - Function that count the size
 * the right subtree of a binary tree
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

size_t height_helper_right(const binary_tree_t *tree)
{
	size_t sizeright;

	if (tree != NULL)
	{
		sizeright = height_helper_right(tree->right);
		/** Visit left subtree */

		return ((sizeright) + 1);
	}

	return (0);
}

/**
 * binary_tree_height - Function that count the size of a binary tree
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right = 0;

	if (tree != NULL)
	{
		left = (height_helper_left(tree) - 1);
		right = (height_helper_right(tree) - 1);

		if (left > right)
		{
			return (left);
		}
		else
			return (right);
	}

	return (0);
}
