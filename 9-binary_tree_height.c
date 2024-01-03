#include "binary_trees.h"


/**
 * get_height - function that measures the height of a binary tree
 *
 * @tree: pointer to node
 * Return: height of a binary tree
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = get_height(tree->left);
	right = get_height(tree->right);

	return ((left > right) ? (left + 1) : (right + 1));
}

/**
 * binary_tree_height - function returns the height of a binary tree
 *
 * @tree: pointer to node
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (get_height(tree) - 1);
}
