#include "binary_tree.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to root of the tree to delete
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
