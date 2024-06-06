#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - check if a node is sibling
 * @node: check the node
 * Return: sibling nodes
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
