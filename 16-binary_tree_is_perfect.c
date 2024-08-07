#include "binary_trees.h"

/**
 * calculate_depth - Function that count the
 * depth of the node
 * @node: pointer to node
 *
 * Return: depth
 */
int calculate_depth(const binary_tree_t *node)
{
    int depth = 0;
    while (node != NULL)
    {
        depth++;
        node = node->left;
    }
    return depth;
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
int is_perfect(const binary_tree_t *node, int depth, int level)
{
	if (node == NULL)
		return 1;

	if (node->left == NULL && node->right == NULL)
		return (depth == level + 1);

	if (node->left == NULL || node->right == NULL)
		return 0;

	return is_perfect(node->left, depth, level + 1) &&
			is_perfect(node->right, depth, level + 1);
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
		return 0;

	int depth = calculate_depth(tree);

	return is_perfect(tree, depth, 0);
}
