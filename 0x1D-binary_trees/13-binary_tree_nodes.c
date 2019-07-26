#include "binary_trees.h"
/**                                                                                                                                  
 * binary_tree_leaves - counts the nodes with at least one child                                                                            
 *                                                                                                                                   
 * @tree - tree to be counted                                                                                                        
 * Return: number of leaves in binary tree                                                                                           
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

  size_t m;

  if (tree == NULL)
    return 0;
  m =  binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
  if (tree->left != NULL || tree->right != NULL)
    m++;
  return m;
