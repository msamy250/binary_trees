#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - check the depth
 * @tree: tree
 * @func: function
 * Return: nothing to return
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
