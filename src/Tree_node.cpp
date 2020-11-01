#include <iostream>
#include "Tree_node.h"

Tree_node::Tree_node(int val)
{
    value = val;
    left = NULL;
    right = NULL;
}

Tree_node::~Tree_node()
{
    //dtor
}
