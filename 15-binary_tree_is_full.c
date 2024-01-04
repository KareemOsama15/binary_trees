#include "binary_trees.h"

/**
 * is_leaf - function that checks if a node is a leaf
 *
 * @node: pointer to node
 * Return: 1 if leaf, else 0
 */
int is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (node && !(node->right) && !(node->left))
		leaf = 1;
	return (leaf);
}

/**
 * binary_tree_is_full - function check if binary tree is full
 *
 * @tree: pointer to node
 * Return: 1 if full , 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (is_leaf(tree))
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));

	return (0);
}
