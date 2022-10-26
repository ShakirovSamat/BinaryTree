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
    if (tree == NULL)
    {
        return 0;
    }
    *countRef++;
    countOfElements(tree->leftChild, &countRef);
    countOfElements(tree->rightChild, &countRef);
    return 0;
}

Error treeHeight(Tree* tree, int* heightRef)
{
    if (tree == NULL)
    {
        return 0;
    }

    int maximumHeight = 0;
    int heightLeft = 0;
    int heightRight = 0;
    treeHeight(tree->leftChild, &heightLeft);
    treeHeight(tree->leftChild, &heightRight);
    if (heightLeft > heightRight)
    {
        maximumHeight = heightLeft;
    }
    else
    {
        maximumHeight = heightRight;
    }
    *heightRef += maximumHeight + 1;
    return 0;
}

Error printPreorder(Tree* tree)
{
    return -1;
}

Error printInorder(Tree* tree)
{
    return -1;
}