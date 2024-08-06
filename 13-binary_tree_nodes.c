#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  function that checks if a node is a leaf
 * @node: pointer to the node to test
 * Return: 1 if node is leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
		{
			return (1);
		}
	}
	return (0);
}

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

/**
 * leaves_helper_left - Function that count the number of leaves
 * in the left subtree of a binary tree
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

size_t leaves_helper_left(const binary_tree_t *tree)
{
	size_t LeavesLeft, MoveLeft;

	if (tree != NULL)
	{
		MoveLeft = leaves_helper_left(tree->left);
		/** Visit left subtree */
		LeavesLeft = (MoveLeft + binary_tree_is_leaf(tree->left));


		return ((LeavesLeft + MoveLeft) + 1);
	}

	return (0);
}

/**
 * leaves_helper_right - Function that count the number of leaves
 * in the right subtree of a binary tree
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

size_t leaves_helper_right(const binary_tree_t *tree)
{
	size_t LeavesRight, MoveRight;

	if (tree != NULL)
	{
		MoveRight = leaves_helper_right(tree->right);
		/** Visit right subtree */
		LeavesRight = (MoveRight + binary_tree_is_leaf(tree->right));

		return ((LeavesRight - MoveRight) + 1);
	}

	return (0);
}

/**
 * binary_tree_leaves - Function that count nb of leaves of a binary tree
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right = 0;
	size_t LoneLeaf = 1;

	if (tree != NULL)
	{
		if (binary_tree_is_leaf(tree) == 1)
		{
			return (LoneLeaf);
		}
		else
		{
			left = (leaves_helper_left(tree) - 1);
			right = (leaves_helper_right(tree) - 1);

				return (left + right);
		}
	}

	return (0);
}

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to tree root
 * Return: N° of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
