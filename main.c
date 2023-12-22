#include "arbreb.c"


int main ()
{
    Node *myTree = InitTree();

    createTree(myTree,4);
    showNodePrefix(myTree);

}