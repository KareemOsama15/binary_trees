#include "binary_trees.h"

/**
 * get_depth - function that measures the depth of a binary tree
 *
 * @tree: pointer to node
 * Return: height of a binary tree
 */
size_t get_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	depth = get_depth(tree->parent);

	return (depth + 1);
}

/**
 * binary_tree_depth - function returns the depth of a binary tree
 *
 * @tree: pointer to node
 * Return: height of a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (get_depth(tree) - 1);
}
