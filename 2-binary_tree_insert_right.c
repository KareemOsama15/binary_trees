#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 *  of another node
 *
 * @parent: the node parent
 * @value: the node value
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = parent->right;
	newNode->left = NULL;

	if (parent->right)
		parent->right->parent = newNode;
	parent->right = newNode;

	return (newNode);
}
