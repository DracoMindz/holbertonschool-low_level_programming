#include "binary_trees.h"
/**
 *
 * bst_T *bst_insert - function that inserts a value in a Binary Search Tree
 *
 * @tree: double pointer to root node of the BST to insert the value
 * @value: value to store node to insert
 *
 * Return: Value
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
      if (tree == NULL)
	return (0);
      binary_tree_is_bst(tree->left);
      binary_tree_is_bst(tree->right);
      
      if (tree->left != NULL && tree->left->n < tree->n)
	return (1);

      if (tree->right != NULL && tree->right->n > tree->n)
	return (1);
  
      if (!binary_tree_is_bst(tree->left) || !binary_tree_is_bst(tree->right))
	return (0);

      else 
	return (0);
}
