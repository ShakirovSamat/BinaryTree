#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

typedef int Element;
typedef int Error;

typedef struct Node
{
    Element value;
    struct Node *leftChild;
    struct Node *rightChild;
}Node;

typedef struct Tree
{
    Node *root;
}Tree;

Error makeEmptyTree(Tree** treeRef)
{
    return -1;
}

void freeTree(Tree* tree)
{
    return;
}

Error exists(Tree* tree, Element element, bool* isExist)
{
    return -1;
}

Error addElement(Tree* tree, Element element)
{
    return -1;
}

Error addElements(Tree* tree, Element* elements, int count)
{
    return -1;
}

Error removeElement(Tree* tree, Element element)
{
    return -1;
}

Error countOfElements(Tree* tree, int* countRef)
{
    return -1;
}

Error treeHeight(Tree* tree, int* heightRef)
{
    return -1;
}

Error printPreorder(Tree* tree)
{
    return -1;
}

Error printInorder(Tree* tree)
{
    return -1;
}