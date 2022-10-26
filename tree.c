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
    *treeRef = calloc(1, sizeof(Tree));
    if (*treeRef == NULL)
    {
        return -1;
    }
    return 0;
}

void freeTree(Tree* tree)
{
    if (tree == NULL)
    {
        return;
    }

    freeTree(tree->leftChild);
    freeTree(tree->rightChild);

    free(tree);

    return;
}

Error exists(Tree* tree, Element element, bool* isExist)
{
    if (tree == NULL)
    {
        *isExist = false;
        return 0;
    }

    if (element == tree->value)
    {
        *isExist = true;
        return 0;
    }
    
    if (element < tree->value)
    {
        return exists(tree->leftChild, element, isExist);
    }
    
    
    
       return exists(tree->rightChild, element, isExist);
    
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