#include "myFunc.h"
#include <cstdlib>
#include <iostream>

using namespace std;

BSTNode* BST_Search(BSTree T, int key)
{
    while (T != NULL && key != T->key) {
        if (key < T->key) {
            T = T->lchild;
        } else {
            T = T->rchild;
        }
    }
    return T;
}

BSTNode* BST_Search2(BSTree T, int key)
{
    if (T == NULL)
        return NULL;
    if (key == T->key)
        return T;
    else if (key < T->key)
        return BST_Search2(T->lchild, key);
    else
        return BST_Search2(T->rchild, key);
}

int BST_Insert(BSTree& T, int k)
{
    if (T == NULL) {
        T = (BSTNode*)malloc(sizeof(BSTNode));
        T->rchild = NULL;
        T->lchild = NULL;
        T->key = k;
        return 1;
    } else if (T->key == k) {
        return 0;
    } else if (k < T->key) {
        return BST_Insert(T->lchild, k);
    } else {
        return BST_Insert(T->rchild, k);
    }
}

int BST_Insert2(BSTree& T, int k)
{
    int flag = 0;
    while (T != NULL) {
        if (T->key == k) {
            return 0;
        } else if (k < T->key) {
            T = T->lchild;
        } else {
            T = T->rchild;
        }
    }
    T = (BSTNode*)malloc(sizeof(BSTNode));
    T->rchild = NULL;
    T->lchild = NULL;
    T->key = k;
    return 1;
}

void Create_BST(BSTree& T, int str[], int n)
{
    T = NULL;
    int i = 0;
    while (i < n) {
        BST_Insert(T, str[i]);
        i++;
    }
}
