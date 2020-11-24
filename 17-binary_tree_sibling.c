#include "binary_trees.h"
/**
 * binary_tree_sibling - that finds the sibling of a node
 *
 * @node: node is a pointer to the node to find the sibling

 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (!node->parent->right || !node->parent->right)
		return (NULL);

	if (node->parent->right != node)
		return (node->parent->right);

	if (node->parent->left != node)
		return (node->parent->left);

	return (NULL);
}
