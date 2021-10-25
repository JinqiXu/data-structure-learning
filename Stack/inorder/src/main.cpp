#include "myFunc.h"
#include <iostream>
using namespace std;

typedef struct TreeNode {
    struct TreeNode* l;
    struct TreeNode* r;
    ElemType x;
} *Tree;

void nonInorder(Tree &root);

int main() 
{
    
}

void nonInorder(Tree& root)
{
    SqStack s;
    TreeNode *cur=root;
    int flag=0;
    while(1)
    {
        if(!cur)
        {
            if(cur==root)
            {

            }
        }
    }
}
