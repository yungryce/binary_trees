#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree
 * Return: 1 for complete, 0 for otherwise
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (complete_helper(tree, 0, binary_tree_size(tree)));
}

/**
 * complete_helper - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * @index: node index to check
 * @size: number of nodes in the tree
 *
 * Return: 1 if the tree is complete
 *         0 if the tree is not complete
 *         0 if tree is NULL
 */
int complete_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (complete_helper(tree->left, 2 * index + 1, size) &&
		complete_helper(tree->right, 2 * index + 2, size));
}
