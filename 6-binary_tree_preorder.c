#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary
 * tree using pre-order traversal
 * @tree: pointer to tree root
 * @func: pointer to function to execute with node value
 * Return: 1 if node is root, 0 otherwise
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *node = tree, *also_node = tree;

	while (node->left != NULL || node->right != NULL)
	{
		while (node->left != NULL)
		{
			node = node->left;
		}
		while (node->right != NULL)
		{
			node = node->right;
		}
		if (node->left == NULL && node->right == NULL)
		{
			also_node = node->parent;
			node = also_node->left;
			func(node->n);
			node = also_node->right;
			func(node->n);
			func(also_node->n);
			also_node = also_node->parent;
		}
	}
}
