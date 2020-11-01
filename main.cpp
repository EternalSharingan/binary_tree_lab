#include <iostream>
#include <Bin_tree.h>
#include <SL_list.h>

using namespace std;

int main()
{
    Bin_tree *tree = new Bin_tree();
    tree->append(10);
    tree->append(5);
    tree->append(15);
    tree->append(3);
    tree->append(7);
    tree->append(12);
    tree->append(18);
    tree->print(NULL);

    SL_list *test = new SL_list();

    tree->tree_to_list(test, NULL);

    test->print();
    return 0;
}
