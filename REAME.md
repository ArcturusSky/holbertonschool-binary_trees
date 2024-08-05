# Binary Trees

This repository is part of the `low-programming` parent repository focused on C programming.

## Summary

- [Binary Trees](#binary-trees)
	- [Summary](#summary)
	- [Requierements](#requierements)
		- [Operating System:](#operating-system)
		- [Compilation flags](#compilation-flags)
	- [Glossary (in alphabetical order)](#glossary-in-alphabetical-order)
	- [Understanding Binary Trees](#understanding-binary-trees)
		- [What is a Binary Tree:](#what-is-a-binary-tree)
		- [Types of Binary Trees](#types-of-binary-trees)
		- [Common Operations](#common-operations)
		- [Implementing Binary Trees in C](#implementing-binary-trees-in-c)
	- [Conclusion](#conclusion)
	- [Author](#author)

## Requierements

Before begining, ensure that you have the following requirements:

### Operating System:

  - Ubuntu 22.04 LTS (of compatible version)

- **Softwares**:

  - **Visual Studio Code:** Ensure you have the latest version installed (You can find it [here](https://code.visualstudio.com/))

  - **GCC (GNU Compiler Collection):** Requiered for compiling the project. You can install it on your **Visual Code** using this: 
  
```sh
sudo apt-get install gcc
```
  
  - **Betty Style:** A style guide for the C programming language used by the Holberton School and ensuring a well structured and readable code. Ensure you have the Betty linter installed:

```sh
git clone https://github.com/holbertonschool/Betty.git
cd Betty
./install.sh
```

  - **Valgrind:** A tool for memiiry debugging, memory leak detection, and profiling. Install it using:

```sh
sudo apt-get install valgrind
``` 

- **Version Control**

**Git:** Ensure you have Git installed for version control:

```sh
sudo apt-get install git
```

### Compilation flags

This project must be compiled with the following flags:

```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format
```

- **`-Wall`:** Enables all standard compiler warnings.

- **`-Wextra`:** Enables additional warnings not covered by **`-Wall`**.

- **`-Werror`:** Treats all warnings as errors, stopping compilation.

- **`-pedantic`:** Enforces strict ISO C compliance.

## Glossary (in alphabetical order)

**A**

- **Algorithm:** A step-by-step procedure or formula for solving a problem or performing a task. Algorithms are essential for processing data and performing calculations efficiently.

- **AVL Tree:** A type of self-balancing binary search tree where the height difference between left and right subtrees of any node is at most one. This ensures O(log n) time complexity for operations such as search, insertion, and deletion.

- **Array:** A collection of items stored at contiguous memory locations, accessible via indices.

**B**

- **Binary Tree:** A hierarchical data structure where each node has at most two children, known as the left child and the right child. It is used for various applications including expression parsing and data organization.

- **Binary Search Tree (BST):** A binary tree where each node has at most two children, and for each node, the left child’s value is less than the node’s value, and the right child’s value is greater. This property allows for efficient searching, insertion, and deletion operations.

- **Breadth-First Search (BFS):** An algorithm for traversing or searching tree or graph data structures level by level, from the root node outward.

**C**

- **Child Node:** A node in a tree that is a descendant of another node, referred to as the parent node.

- **Complete Binary Tree:** A binary tree in which all levels, except possibly the last, are fully filled, and all nodes are as left as possible.

- **Create Node:** A function or process that initializes a new node with specified values and returns a pointer to it.

**D**

- **Depth:** The level of a node within a tree. The root node is at depth 0, its children are at depth 1, and so on.

- **Dynamic Set:** A collection of data elements that supports dynamic operations like insertion, deletion, and searching. Binary trees are often used to implement dynamic sets efficiently.

**E**

- **Empty Tree:** A tree that does not contain any nodes (i.e., its root pointer is NULL).

**F**

- **Function:** A block of code that performs a specific task and can be called with arguments to execute its logic.

**G**

- **Generic Tree:** A tree structure where each node can have an arbitrary number of children (not limited to just two).

**I**

- **Insertion:** The process of adding a new node to a tree or any data structure.

**L**

- **Left Child:** The child node that is positioned to the left of a parent node in a binary tree.

- **Level Order Traversal:** Traversing a tree level by level, starting from the root node.

**N**

- **Node:** An individual element of a tree data structure that contains a value and references to its children.

**P**

- **Parent Node:** A node that has one or more child nodes in a tree structure.

- **Pointer:** A variable that holds the memory address of another variable or node.

**Q**

- **Queue:** A linear data structure used to store elements in a first-in, first-out (FIFO) manner. In the context of binary trees, it is commonly used in level-order traversal.

**R**

- **Right Child:** The child node that is positioned to the right of a parent node in a binary tree.

**S**

- **Stack:** A linear data structure that follows the last-in, first-out (LIFO) principle. It is used for depth-first search algorithms and other operations.

**T**

- **Tree:** A hierarchical data structure consisting of nodes, where each node has zero or more child nodes and exactly one parent node (except for the root node).

- **Traversal:** The process of visiting all nodes in a tree in a specific order, such as in-order, pre-order, or post-order.

**U**

- **Update:** Modifying or changing the value or structure of a node or tree.

**V**

- **Value:** The data or information stored in a node.

**W**

- **While Loop:** A control flow statement that repeatedly executes a block of code as long as a specified condition remains true.

**X**

- **O(log n):** Refers to logarithmic time complexity, where the time required for an operation grows logarithmically with the size of the input data. This is typical in balanced binary trees and AVL trees.



## Understanding Binary Trees

### What is a Binary Tree:

A binary tree is a data strcture where each node has a t most two children, known as the **left child** and the **right child**. The top node is called the **root**. Nodes with no children are called **leaves**.

**Diagram of a binary Tree:**

![Binary Tree](https://static.javatpoint.com/ds/images/types-of-binary-tree.png)

**Difference between Binary Tree and Binary Search Tree**

**Binary Tree:** A tree where each node has at most two children, without specific ordering constraints.

**Binary Search Tree (BST):** A binary tree with an ordering property where left child nodes are less than the parent, and right child nodes are greater.

**Why using it?**

Binary trees are essential data structures used to organize and manage data efficiently. They consist of nodes connected by edges, where each node has at most two children: a left and a right child. This structure supports fast data access and is useful in many applications.

**Key Benefits:**

  - **Efficient Operations:** Balanced binary trees allow quick insertions, deletions, and searches with average times.
  - **Hierarchical Data:** They naturally represent hierarchical data, like file systems and organizational charts.
  - **Versatile:** Different types of binary trees (binary search trees, AVL trees) serve various needs, from sorting to priority queues.

**Challenges:**

  - **Balancing:** Keeping the tree balanced is important for maintaining performance and avoiding inefficiencies.
  - **Memory Use:** Each node requires extra memory for child pointers, which can be a concern in limited environments.

**Applications:**

  - **Data Management:** Used in databases and file systems for efficient data handling.
  - **Expression Parsing:** Helps in evaluating and processing mathematical expressions.
  - **Priority Queues:** Binary heaps, a type of binary tree, manage priorities in scheduling tasks.

In essence, binary trees are a fundamental and versatile tool in computer science, offering a good balance between simplicity and efficiency.


**Components of a Binary Tree**

- **Root:** The top node of the tree.
- **Deepth:** Each "level" in the tree
- **Node:** Each element in the tree.
- **Edge:** The link between nodes.
- **Leaf:** A node with no children.
- **Internal Node:** A node with at least one child

**Diagram Showing full terminology:**

```css
      Root
        |
        |
      [Node]
     /      \
  Left     Right
   |         |
  [Node]   [Node]
```

![Components](https://www.scaler.com/topics/media/terminologies-in-binary-trees-1024x640.webp)

### Types of Binary Trees

**Full Binary Tree:** Every node has **`0`** OR **`2`** children.

Left **CORRECT** Vs right **INCORRECT**

![Diagram full binary tree](https://miro.medium.com/v2/resize:fit:2000/format:webp/1*fh2By4u-SxTlt6u2xHqnCg.png)


**Complete Binary Tree**: All levels are fully filled except possibly the last level, which is filled from left to right.
  
   **Diagram:**
```css
      A
     / \
    B   C
   / \ / 
  D  E F  
```

Left **CORRECT** Vs right **INCORRECT**

![Diagram Complete Binary tree](https://miro.medium.com/v2/resize:fit:2000/format:webp/1*M1qfRR59TR9-i4pmI-_Clg.png)


**Perfect Binary Tree:** All internal nodes have exactly two children and all leaves are at the same level.
  
   **Diagram:**
```css
      A
     / \
    B   C
   / \ / \
  D  E F  G
```

Left **CORRECT** Vs right **INCORRECT**

![Perfect Binary tree](https://miro.medium.com/v2/resize:fit:2000/format:webp/1*EgcvwUHXnmdOpbHQwgCknA.png)

**Balanced Binary Tree:** The height difference between the left and right subtrees is no more than one.


   **Diagram:**
```css
      A
     / \
    B   C
   / \ / \
  D  E F  G
```

![Balanced Binary Tree](https://miro.medium.com/v2/resize:fit:2000/format:webp/1*jSq-xjEZYytNDIBpZNQC2w.png)

**Degenerate (or Pathological) Binary Tree:**  A Binary Tree where every parent node has only one child node.
  
   **Diagram:**
```css
      A
     /
    B  
   /
  D  

```

Left **CORRECT** Vs right **INCORRECT**

![Degenerate Binary Tree](https://miro.medium.com/v2/resize:fit:2000/format:webp/1*m5BjLJeSrSGH4US-QXj4aA.png)

### Common Operations

  - **Insertion:** Adding a node to the tree while maintaining its properties
  - **Deletion:** Removing a node and reorganizing the tree to preserve its properties
  - **Traversal:** Visiting all nodes in a specific order:
    
	- **In-order:** (Left, Root, Right)
	- **Pre-Order:** (Root, Left, Right)
	- **Post-Order** (Left, Right, Root)

**Traversal Diagrams:**

  - **In-order Traversal:**
```mathematica
Left -> Root -> Right
```

 - **Pre-order Traversal:**
```mathematica
Root -> Left -> Right
```

 - **Post-order Traversal:**
```mathematica
Left -> Right -> Root
```

### Implementing Binary Trees in C

Below is a basic implementation of a binary tree in C, including how to create and use binary trees with complete and descriptives names, adhering to the Betty style, and commenting each step.

- **Define the Node Structure:**

```c
#include <stdio.h>
#include <stdlib.h>

/**  Define a structure for a binary tree node */
typedef struct s_node
{
    int data;              /** Value of the node */
    struct s_node *left;   /** Pointer to the left child */
    struct s_node *right;  /** Pointer to the right child */
} tree_node;
```

-  **Create a New Node:**

```c
/** Function to create a new node */
tree_node *create_node(int value)
{
    tree_node *New_Node;

    /** Allocate memory for the new node */
    New_Node = malloc(sizeof(tree_node));
    if (New_node == NULL)  /** Check if memory allocation was successful */
    {
        printf("Error allocating memory\n");
        return NULL;
    }

    /** Initialize the node's data and children */
    New_Node->data = value;
    New_Node->left = NULL;
    New_Node->right = NULL;

    return New_Node;
}

```

**TLDR: Inserting a node, summarized.**

The **`insert_node_into_binary_tree`** function uses a **breadth-first** approach to insert a new node into a binary tree. The algorithm ensures that nodes are added level by level and from left to right.

   1. **Initialization:**

      - Declare necessary variables.
      - Check if the tree is empty and handle accordingly.
      - Start processing nodes with the root node.

   2. **Processing Nodes:**

      - Use a loop to process nodes in the **`Nodes_To_Visit array`**.
      - Insert the new node as a left or right child when a **NULL** child is found.
      - Add non-NULL children to the **`Nodes_To_Visit`** array for further processing.


**Insert a Node into a Binary Tree (steps by steps):** 
  
   - **Function Signature**

```c
void insert_node_into_binary_tree(tree_node **Pointer_to_Root, int Value_to_Insert)

```

**Parameters:**

  - **`Pointer_to_Root`:** A pointer to the roof pointer of the tree (allows modifying the tree structure).

  - **`Value_to_Insert`:** The value for the new node to be inserted. 

  1. **Step 1: Variable Devlarations:**

```c
tree_node *Nodes_To_Visit[100];
int Current_Position = 0;
int Next_Position = 0;
```

  - **`Nodes_To_Visit[100]`:** Array to store nodes that need to be processed, with a size of 100 (can be adjusted as needed)

  - **`Current_Position`:** Index to keep track of the node being processed from **`Nodes_to_Visit`**.

  - **`Next_Position`:** Index for adding nodes to **`Nodes_To_Visit`** as we traverse the tree.

  1. **Step 2: Check if the Tree is Empty**

```c
if (*Pointer_to_Root == NULL)
{
    *Pointer_to_Root = create_node(Value_to_Insert);
    return;
}
```

  - If the tree is empty (**`*Pointer_to_Root`** is **`NULL`**), create a new node with the value to insert and set it as the root of the tree.

  3. **Step 3: Initialize Processing with Root node pointer**

```c
Nodes_To_Visit[Next_Position++] = *Pointer_to_Root;
```

  - Start the processing by adding the root node to the **`Nodes_To_Visit`** array.
  
  - Increment **`Next_Position`** to move to the next index for future nods

  4. **Step 4: Breadth-First Search Loop**

```c
while (Current_Position < Next_Position)
{
    tree_node *Current_Node = Nodes_To_Visit[Current_Position++];
```

  - Use a **`while`** loop to process nodes, level by level.

  - Retrive the nood at **`Current_Position`** from **`Nodes_To_Visit`** and increment **`Current_Position`** to move to the next node.


  5. **Step 5: Chek Left Child**

```c
if (Current_Node->left_child == NULL)
{
    Current_Node->left_child = create_node(Value_to_Insert);
    return;
}
else
{
    Nodes_To_Visit[Next_Position++] = Current_Node->left_child;
}
```

  - If the left child of **`Current_Node`** is **`NULL`**, instert the new node as the left child and return.
  
  - If not **`NULL`**, add the left child to **`Nodes_To_Visit`** array for further processing

  6. **Step 6: Check Right Child**

```c
if (Current_Node->right_child == NULL)
{
    Current_Node->right_child = create_node(Value_to_Insert);
    return;
}
else
{
    Nodes_To_Visit[Next_Position++] = Current_Node->rigt_child;
}
```

  - If the right child of **`Current_Node`** is **`NULL`**, instert the new node as the right child and return.
  
  - If not **`NULL`**, add the right child to **`Nodes_To_Visit`** array for further processing


**Code in a complete form:**

```c
#include <stdio.h>
#include <stdlib.h>

/** Function to insert a node into the binary tree */
void insert_node_into_binary_tree(tree_node **Pointer_to_Root, int Value_to_Insert)
{
	/** Declare an array to keep track of nodes to be processed /*
	tree_node *Nodes_To_Visit[100];
	/** Initialize positions for tracking nodes in the array */
	int Current_Position = 0;   /** Position to retrieve the next node for */processing
	int Next_Position = 0;      /** Position to add the next node for processing */

	/** Check if the tree is empty */
	if (*Pointer_to_Root == NULL)
	{
		/** Create the root node with the given value */
		*Pointer_to_Root = create_node(Value_to_Insert);
		return;
	}

	/** Start with the root node in the array */
	Nodes_To_Visit[Next_Position++] = *Pointer_to_Root;

	/** Process nodes in the array until all nodes are processed */
	while (Current_Position < Next_Position)
	{
		/** Retrieve the node at the current position */
		tree_node *Current_Node = Nodes_To_Visit[Current_Position++];

		/** Check if the left child of the current node is NULL */
		if (Current_Node->left_child == NULL)
		{
			/** Insert the new node as the left child */
			Current_Node->left_child = create_node(Value_to_Insert);
			return;
		}
		else
		{
			/** Add the left child to the array for further processing */
			Nodes_To_Visit[Next_Position++] = Current_Node->left_child;
		}

		/** Check if the right child of the current node is NULL */
		if (Current_Node->right_child == NULL)
		{
			/** Insert the new node as the right child */
			Current_Node->right_child = create_node(Value_to_Insert);
			return;
		}
		else
		{
			/** Add the right child to the array for further processing */
			Nodes_To_Visit[Next_Position++] = Current_Node->right_child;
		}
	}
}

```

**In-order Traversal of a Binary Tree**

**In-order traversal** is a method to visit nodes where you traverse the left subtree, visit the root, and then traverse the right subtree. This is the same for both **Binary Search trees** and **general binary trees**.

```c
/** Function to perform in-order traversal of the binary tree */
void in_order_traversal(t_node *root)
{
    if (root != NULL)
    {
        in_order_traversal(root->left);  /** Visit left subtree */
        printf("%d ", root->data);       /** Visit root */
        in_order_traversal(root->right); /** Visit right subtree */
    }
}
```

## Conclusion

This repository covers the basics of binary trees, including their types, operations, and C implementation. We explored key concepts like node structure, tree types, and traversal methods. The provided C code demonstrates how to create and manipulate binary trees, offering practical examples for understanding and working with this fundamental data structure.

## Author

Anne-Cécile Besse (Arc), José Puertas