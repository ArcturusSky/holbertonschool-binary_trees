#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Function that create a binary tree node
 * @parent: pointer to parent of the node to create
 * @value: value to insert in the new node
 *
 * Return: pointer to the node
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *New_Node;

	/** Allocate mem for new node */
	New_Node = malloc(sizeof(binary_tree_t));

	/** Check if allocation fails */
	if (New_Node == NULL)
	{
		return (NULL);
	}

	/** Attribute values to new node */
	New_Node->n = value;
	New_Node->left = NULL;
	New_Node->right = NULL;
	New_Node->parent = parent;

	/** If no parent yet, New_Node become root */
	if (New_Node->parent == NULL)
	{
		parent = New_Node;
	}

	return (New_Node);

}
