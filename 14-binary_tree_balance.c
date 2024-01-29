#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: Balance or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return ((int)binary_tree_height_b(tree->left) -
		 (int)binary_tree_height_b(tree->right));
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: size of binary tree, 0 if null
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree)
	{
		l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		return (l > r ? l : r);
	}
	return (0);
}
