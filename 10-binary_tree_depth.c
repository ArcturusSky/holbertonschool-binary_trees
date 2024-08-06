#include "binary_trees.h"

/**
 * depth_helper_parent - Function that count the size
 * the left subtree of a binary tree
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

size_t depth_helper_parent(const binary_tree_t *tree)
{
	size_t parentheight;

	if (tree != NULL)
	{
		parentheight = depth_helper_parent(tree->parent);
		/** Visit left subtree */

		return ((parentheight) + 1);
	}

	return (0);
}

/**
 * binary_tree_depth - Function that count the size of a binary tree
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree != NULL)
	{
		depth = (depth_helper_parent(tree) - 1);

		return (depth);
	}

	return (0);
}
