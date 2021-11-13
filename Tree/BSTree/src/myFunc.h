#define MaxSize 105

typedef struct BSTNode {
    int key;
    struct BSTNode *lchild, *rchild;
} BSTNode, *BSTree;

BSTNode* BST_Search(BSTree T, int key);
BSTNode* BST_Search2(BSTree T, int key);
int BST_Insert(BSTree& T, int k);
int BST_Insert2(BSTree& T, int k);
void Create_BST(BSTree& T, int str[], int n);
