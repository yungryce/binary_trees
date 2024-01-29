#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "12-binary_tree_leaves.c"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: count of nodes with at least one child
 *	0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
