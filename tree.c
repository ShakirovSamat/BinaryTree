#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

typedef int Element;
typedef int Error;


typedef struct Tree
{
    Element value;
    struct Tree *leftChild;
    struct Tree *rightChild;
}Tree;

Error makeEmptyTree(Tree** treeRef)
{
    return -1;
}

void freeTree(Tree* tree)
{
    return - 1;
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
    if (tree == NULL)
    {
        return 0;
    }
    printf("%d ", tree->value);
    printPreorder(tree->leftChild);
    printPreorder(tree->rightChild);
    return 0;
}

Error printInorder(Tree* tree)
{
    if (tree == NULL)
    {
        return 0;
    }
    printInorder(tree->leftChild);
    printf("%d ", tree->value);
    printInorder(tree->rightChild);
    return 0;
}