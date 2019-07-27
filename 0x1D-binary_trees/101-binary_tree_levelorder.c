#include "binary_trees.h"
/**
 * binary_tree_levelordern - a function that goes through a binary tree using level-order traversal
 * 
 * @tree: a pointer to the root of the tree to traverse
 * @func: a pointer to a function to call each node
 *
 * Return: void
 *
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
  if (tree == NULL || func == NULL)
    return (0);

}
