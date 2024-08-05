#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes a binary tree node
 * @tree: pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *node_to_erase = tree, *parent_node_to_erase = tree;

	if (tree != NULL)
	{
		while (parent_node_to_erase->left != NULL || parent_node_to_erase->right != NULL)
		{
			while (node_to_erase->left != NULL)
			{
				node_to_erase = node_to_erase->left;
			}
			while (node_to_erase->right != NULL)
			{
				node_to_erase = node_to_erase->right;
			}
			if (node_to_erase->left == NULL && node_to_erase->right == NULL)
			{
				parent_node_to_erase = node_to_erase->parent;
				node_to_erase = parent_node_to_erase->left;
				free(node_to_erase);
				node_to_erase = parent_node_to_erase->right;
				free(node_to_erase);
				free(parent_node_to_erase);
				parent_node_to_erase = tree;
				node_to_erase = tree;
			}
		}
	}
}
