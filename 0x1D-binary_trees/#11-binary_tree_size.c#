#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
  size_t l = 0;
  size_t r = 0;

  if (tree == NULL)
    return 0;

  while (tree->right != NULL)
    {
      tree = tree->right;
      r++;
    }
  while (tree->left != NULL)
    {
      tree = tree->left;
      l++;
    }
  
  

