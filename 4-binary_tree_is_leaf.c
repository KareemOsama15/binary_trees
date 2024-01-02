#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 *
 * @node: pointer to node
 * Return: 1 if leaf, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (node && (node->right || node->left))
		leaf = 1;
	return (leaf);
}
