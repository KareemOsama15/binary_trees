#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a node is a root
 *
 * @node: pointer to node
 * Return: 1 if root, else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int root = 0;

	if (node && node->parent == NULL)
		root = 1;

	return (root);
}
