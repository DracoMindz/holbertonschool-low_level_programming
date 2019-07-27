#include "binary_trees.h"
/**
 *
 * bst_T *bst_insert - function that inserts a value in a Binary Search Tree
 *
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 *
 * Return: Value
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
      if (tree == NULL)
	return (0);
      binary_tree_is_bst(tree->left);
      binary_tree_is_bst(tree->right);
      
      if (tree->left != NULL && tree->right != NULL)
	return (1);
  
      if (tree->left < tree->right)
	return (1);

      else 
	return (0);
}
