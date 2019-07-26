#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in abinary tree
 *
 * @tree - tree to be counted
 * Return: number of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
  
  size_t m;

      if (tree == NULL)
	return 0;
      m =  binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
      if (tree->left == NULL && tree->right == NULL)
	m++;
      return m;
      
}
