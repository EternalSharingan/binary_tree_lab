#ifndef TREE_NODE_H
#define TREE_NODE_H


class Tree_node
{
    public:
        int value;
        Tree_node *left;
        Tree_node *right;
        Tree_node(int);
        ~Tree_node();
};

#endif // TREE_NODE_H
