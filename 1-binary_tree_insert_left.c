#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    if (parent == NULL) {
        return NULL;  // Return NULL if parent is NULL
    }

    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));  // Allocate memory for the new node
    if (new_node == NULL) {
        return NULL;
    }

    // Initialize the new node
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = parent->left;  
    new_node->right = NULL;

    if (parent->left != NULL) {
        parent->left->parent = new_node;  
    }
    parent->left = new_node;  

    return new_node;  
}
