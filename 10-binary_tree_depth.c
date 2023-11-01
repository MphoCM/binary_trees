#include "bianry_trees.h"

/**
 * binary_tree_depth - measure depth of node in binary tree
 * @tree: pointer to node to measure
 * Return: depth otherwise 0 tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *trr)
{
	size_t depth;

	if (tree ==NULL || tree->parent -- NULL)
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
