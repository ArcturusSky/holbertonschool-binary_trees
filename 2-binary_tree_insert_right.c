#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that insert a node as the right child
 * @parent: pointer to parent of the node to create
 * @value: value to insert in the new node
 *
 * Return: pointer to the node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *RightChild;

/** Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/** Create a new node with the given value and set its parent */
	RightChild = binary_tree_node(parent, value);

	/** Check  new node is NULL; return NULL if true */
	if (RightChild == NULL)
	{
		return (NULL);
	}

	/** If the parent already has a right child, adjust pointers */
	if (parent->right != NULL)
	{
		/**
		 * Set new node’s right child to the
		 * existing right child of the parent
		 */
		RightChild->right = parent->right;
		/** Update the existing right child’s parent to the new node */
		parent->right->parent = RightChild;
		/** Update the parent's right child to new node */
		parent->right = RightChild;
	}
	else
	{
		/** If no right child set the new node as right child */
		parent->right = RightChild;
	}

	/** Return the newly created right child node */
	return (RightChild);
}

