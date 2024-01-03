#include "binary_trees.h"


/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: pointer to node
 * Return: size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
