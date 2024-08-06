#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to tree root
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			node_count = binary_tree_nodes(tree->left) + 1;
		}
		if (tree->right != NULL)
		{
			node_count = binary_tree_nodes(tree->right) + 1;
		}
		if (node_count >= 2)
		{
			node_count++;
		}
		return (node_count);
	}
    return (0);
}
