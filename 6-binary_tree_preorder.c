#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through tree using pre-order travers
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to function to call each node
 * Return: nothing
 */
void binary_tree_preorder(cost binary_tree_t *trr, void (*func)(i))
{
	if (tree == NULL || func == NULL)
		return;
	fun(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
