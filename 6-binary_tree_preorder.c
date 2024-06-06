#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - print the elements
 * @tree: tree
 * @func: function
 * Return: nothing to return
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
