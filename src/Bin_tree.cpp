#include <iostream>
#include "Bin_tree.h"
using namespace std;

Bin_tree::Bin_tree()
{
    root = NULL;
}

Bin_tree::~Bin_tree()
{
    //dtor
}

void Bin_tree::append(int val)
{
    Tree_node *new_node = new Tree_node(val);

    Tree_node *last = root;
    if(root == NULL)
    {
        root = new_node;
    }
    else
    {
        while(true)
        {
            if(new_node->value < last->value)
            {
                if(last->left == NULL)
                {
                    last->left = new_node;
                    break;
                }
                last = last->left;
            }
            else
            {
                if(last->right == NULL)
                {
                    last->right = new_node;
                    break;
                }
                last = last->right;
            }
        }
    }
}

void Bin_tree::print(Tree_node *node=NULL)
{
    if(node == NULL)
    {
        node = root;
    }
    if(node->left != NULL)
    {
        print(node->left);
    }
    cout << node->value <<endl;
    if(node->right != NULL)
    {
        print(node->right);
    }
}


void Bin_tree::tree_to_list(SL_list *result, Tree_node *node=NULL)
{
    //in-order
    if(node == NULL)
    {
        node = root;
    }
    if(node->left != NULL)
    {
        tree_to_list(result, node->left);
    }
    result->append(node->value);
    if(node->right != NULL)
    {
        tree_to_list(result, node->right);
    }

}
