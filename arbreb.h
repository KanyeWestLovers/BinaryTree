#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct Node Node; // Question 1

struct Node
{
    Node *left;
    Node *right;
    int value;
}



Node *InitTree();
int addValueToNode ( Node *newNode, int e);
int emptyNode ( Node *myNode);
void showNodePrefix ( Node *newNode);