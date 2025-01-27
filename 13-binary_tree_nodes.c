#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that count the number of nodes
 * in each subtree with recursion
 * @tree: pointer to root of a node
 *
 * Return: NULL or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	return (1 + (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)));

}
