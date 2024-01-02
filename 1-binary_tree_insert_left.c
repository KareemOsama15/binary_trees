#include "binary_trees.h"

/**
 * binary_tree_insert_left - function inserts
 *	a node as the left-child of another node
 *
 * @parent: the node parent
 * @value: the node value
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = parent->left;

	if (parent->left)
		parent->left->parent = newNode;
	parent->left = newNode;

	return (newNode);
}
