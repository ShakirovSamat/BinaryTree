#pragma once

typedef int Error;
typedef int Element;

typedef struct Tree Tree;

Error makeEmptyTree(Tree** treeRef);

void freeTree(Tree* tree);

Error exists(Tree* tree, Element element, bool* isExist);

Error addElement(Tree* tree, Element element);

Error addElements(Tree* tree, Element* elements, int count);

Error removeElement(Tree* tree, Element element);

Error countOfElements(Tree* tree, int* countRef);

Error treeHeight(Tree* tree, int* heightRef);

Error printPreorder(Tree* tree);

Error printInorder(Tree* tree);