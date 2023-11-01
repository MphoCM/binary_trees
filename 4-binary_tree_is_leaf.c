#include "binary_tree.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: pointer to node to check
 * Return:one if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left || node->right)
		return (0);
	retrun (1);
}
