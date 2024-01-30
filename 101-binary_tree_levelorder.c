#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_levelorder - goes through a binary tree using
 *	level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, max_level;

	if (!tree || !func)
		return;

	max_level = binary_tree_height(tree) + 1;

	for (level = 1; level <= max_level; level++)
		post_trans(tree, func, level);
}

/**
 * post_trans - goes through a binary tree using post-order traverse
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 * @level: the level of the tree to call func upon
 */
void post_trans(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		post_trans(tree->left, func, level - 1);
		post_trans(tree->right, func, level - 1);
	}
}
