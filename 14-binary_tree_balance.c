#include "binary_trees.h"

/**
 * balance_helper_left - Function that count the size
 * the left subtree of a binary tree
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

int balance_helper_left(const binary_tree_t *tree)
{
	int sizeleft;

	if (tree != NULL)
	{
		sizeleft = balance_helper_left(tree->left);
		/** Visit left subtree */

		return ((sizeleft) + 1);
	}

	return (0);
}

/**
 * balance_helper_right - Function that count the size
 * the right subtree of a binary tree
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

int balance_helper_right(const binary_tree_t *tree)
{
	int sizeright;

	if (tree != NULL)
	{
		sizeright = balance_helper_right(tree->right);
		/** Visit left subtree */

		return ((sizeright) + 1);
	}

	return (0);
}

/**
 * binary_tree_balance - Function that count the size of a binary tree
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right = 0;

	if (tree != NULL)
	{
		left = (balance_helper_left(tree) - 1);
		right = (balance_helper_right(tree) - 1);

			return (left - right);
	}

	return (0);
}
