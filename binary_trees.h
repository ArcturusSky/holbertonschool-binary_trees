#ifndef BINARY_H_
#define BINARY_H_

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

void binary_tree_print(const binary_tree_t *);
	/** Already provide func to print a binary tree */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
	/** Function that create a binary tree node */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
	/** Function that insert a node as the left-childe or another node */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
	/** Function that insert a node as the left-childe or another node */

void binary_tree_delete(binary_tree_t *tree);
	/** Function that delete a binary tree */

int binary_tree_is_leaf(const binary_tree_t *node);
	/** Function that check if node is a leaf */

int binary_tree_is_root(const binary_tree_t *node);
	/** Function that check if node is root */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
	/** Function that goes through a binary tree using pre-order traversal */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
	/** Function that goes through a binary tree using in-order traversal */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
	/** Function that goes through a binary tree using post-order traversal */

size_t height_helper_right(const binary_tree_t *tree);
	/** Auxilary function to help "binary_tree_height" */

size_t height_helper_left(const binary_tree_t *tree);
	/** Auxilary function to help "binary_tree_height" */

size_t binary_tree_height(const binary_tree_t *tree);

size_t depth_helper_parent(const binary_tree_t *tree);
	/** Auxilary function to help "binary_tree_depth" */

size_t binary_tree_depth(const binary_tree_t *tree);
	/** Function that measures the depth of a node in a binary tree */

size_t binary_tree_size(const binary_tree_t *tree);
	/** Function that measures the size of a binary tree */

size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif
