#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that insert a node as the left child
 * @parent: pointer to parent of the node to create
 * @value: value to insert in the new node
 *
 * Return: pointer to the node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *LeftChild;

	/** Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/** Create a new node with the given value and set its parent */
	LeftChild = binary_tree_node(parent, value);

	/** Check  new node is NULL; return NULL if true */
	if (LeftChild == NULL)
	{
		return (NULL);
	}

	/** If the parent already has a left child, adjust pointers */
	if (parent->left != NULL)
	{
		/**
		 * Set new node’s left child to the
		 * existing left child of the parent
		 */
		LeftChild->left = parent->left;
		/** Update the existing left child’s parent to the new node */
		parent->left->parent = LeftChild;
		/** Update the parent's left child to new node */
		parent->left = LeftChild;
	}
	else
	{
		/** If no left child set the new node as left child */
		parent->left = LeftChild;
	}

	/** Return the newly created left child node */
	return (LeftChild);
}

