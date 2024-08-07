#include "binary_trees.h"

/**
 * full_helper - Helper function to check if the binary tree is full
 * @tree: pointer to the root of the tree
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int full_helper(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0); /** An empty tree is not considered full */

	if (tree->left == NULL && tree->right == NULL)
		return (1); /** A leaf node is full */

	if (tree->left != NULL && tree->right != NULL)
	{
		/** Both children exist, check if both subtrees are full */
		return (full_helper(tree->left) && full_helper(tree->right));
	}

	/** If one child is missing, the tree is not full */
	return (0);
}

/**
 * binary_tree_is_full - Function to check if a binary tree is full
 * @tree: pointer to the root of the tree
 *
 * Return: 1 if the tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0); /** An empty tree is not considered full */

	return (full_helper(tree));
}
