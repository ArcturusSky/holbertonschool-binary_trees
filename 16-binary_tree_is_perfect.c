#include "binary_trees.h"

/**
 * calculate_depth - Function that count the
 * depth of the node
 * @tree: pointer to node given by tree
 *
 * Return: depth
 */
int calculate_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect - function that finds
 * if the binary tree is perfect
 * @tree: pointer to tree root
 * @depth: depth of node
 * @level: distance from root to node
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
			is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - function that finds
 * if the binary tree is perfect
 * @tree: pointer to tree root
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int depth = calculate_depth(tree);

	return (is_perfect(tree, depth, 0));
}
