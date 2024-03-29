#include "binary_trees.h"

/**
 * binary_tree_leaves - function that measures the size of a binary tree
 *
 * @tree: pointer to node
 * Return: size of a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		leaves += 1;
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
