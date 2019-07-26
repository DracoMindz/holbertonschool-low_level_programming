#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree
 * 
 * @tree: binary tree to be measured

 * Return: Always 0 (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
  size_t i = 0;

  if (tree == NULL)
    return 0;

  while (tree->parent != NULL)
    {
      tree = tree->parent;
      i++;
    }
  return i;
}
