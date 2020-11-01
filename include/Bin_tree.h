#ifndef BIN_TREE_H
#define BIN_TREE_H
#include <Tree_node.h>
#include <SL_list.h>

class Bin_tree
{
    public:
        Tree_node *root;
        Bin_tree();
        ~Bin_tree();
        void append(int);
        void print(Tree_node *);
        void tree_to_list(SL_list *, Tree_node *);
};

#endif // BIN_TREE_H
