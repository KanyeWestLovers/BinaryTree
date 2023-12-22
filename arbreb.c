#include "arbreb.h"


Node *InitTree()
{
    Node *newNode = malloc(sizeof(*newNode));

   // newNode->value = NULL;
    newNode->right == NULL;
    newNode->left == NULL;

    return newNode;
}


int createTree ( Node *newNode, int e) //Question 2
{
    newNode = malloc(sizeof(*newNode));
    if ( newNode == NULL)
    {
        exit (EXIT_FAILURE);
    }
    newNode->value == e;
    newNode->right = NULL;
    newNode->left = NULL;
}

int emptyNode ( Node *myNode)
{
    return (myNode == NULL);
}

void showTreePrefix ( Node *newNode) // Question 9
{
    if ( !emptyNode(newNode) )
    {
        printf("%d ", newNode->value);
        printf("-> ");
        showNodePrefix(newNode->left);
        showNodePrefix(newNode->right);
    }
    printf("NULL");
    
}

int mergeTree ( Node *Left, Node *Right, int iValue)
{
    Node *Result = malloc(sizeof(*Result));

    if ( Result == NULL)
    {
        exit (EXIT_FAILURE);
    }

    Result->value = iValue;
    Result->left = Left;
    Result->right = Right;
    

}


int freeTree ( Node *newNode) //Question 4
{
    if ( !emptyNode(newNode) )
    {   
        free(newNode);
        freeTree(newNode->left);
        freeTree(newNode->right);
    }
}


int sumOfLeftTree ( Node *myNode) //Question 6
{
    int iSum = 0;
    if ( myNode == NULL)
    {
        return 0;
    }
    else
    {
        iSum = myNode->value + sumOfLeftTree(myNode->left);
    }

    return iSum;
}


int depthOfTree ( Node *newNode) // Question 7
{
    int count = 0;

    if ( !emptyNode(newNode) )
    {
        showNodePrefix(newNode->left);
        showNodePrefix(newNode->right);
        count +=1;
    }
    printf("NULL");
    
    return count;
}