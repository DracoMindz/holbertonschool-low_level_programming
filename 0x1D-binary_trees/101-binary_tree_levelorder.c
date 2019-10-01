#include "binary_trees.h"
/**
 * binary_tree_levelordern - a function traverse binary
 *
 * @tree: a pointer to the root of the tree to traverse
 * @func: a pointer to a function to call each node
 *
 * Return: void value
 *
 */
void binary_tree_levelprint(const binary_tree_t *tree,
			    void (*func)(int), int level)
{
        if (tree == NULL || func == NULL)
	  return;

	if (level == 1)
	  func(tree->n);
	else if (level > 1)
	  {
	    binary_tree_levelprint(tree->left, func, (level - 1));
	    binary_tree_levelprint(tree->right, func, (level - 1));
	  }
}
/**
 * binary_tree_leveloader - funtion prints tree based on height
 * @tree: traverse and print
 * @func: to print
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
        size_t h;
	size_t lev;

	h = binary_tree_height(tree) + 1;

	for (lev = 0; lev <= h; lev++)
	  binary_tree_levelprint(tree, func, lev);
	(void)h; 
}
/**
 * binary_tree_height - caluculates height of binary tree
 * @tree: tree to be measured
 *
 * Return: tree height value
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
      size_t m_left, m_right;

      if (tree == NULL)
	return (0);
      if (tree->left == NULL && tree->right == NULL)
	return (0);
      m_right = binary_tree_height(tree->right);
      m_left = binary_tree_height(tree->left);

      if (m_right > m_left)
	return (m_left + 1);
      else
	return (m_right + 1);
}
