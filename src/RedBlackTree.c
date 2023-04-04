#include "RedBlackTree.h"

static void rbtree_left_rotate(RedBlackTree *T,rbtree_node *x)
{
    rbtree_node *y = x->right;
    // 1
    x->right=y->left;
    if(y->left != T->nil)
        y->left->parent=x;

    // 2
    y->parent=x->parent;
    if(x->parent==T->nil)
        T->root=y;
    else if(x==x->parent->left)
        x->parent->left=y;
    else
        x->parent->right=y;

    // 3
    y->left=x;
    x->parent=y;
    
    
}

static void rbtree_right_rotate(RedBlackTree *T,rbtree_node *y)
{
    rbtree_node *x = y->left;
    // 1
    y->left=x->right;
    if(x->right != T->nil)
        x->right->parent=y;

    // 2
    x->parent=y->parent;
    if(y->parent==T->nil)
        T->root=x;
    else if(y==y->parent->right)
        y->parent->right=x;
    else
        y->parent->left=x;

    // 3
    x->right=y;
    y->parent=x;
    
    
}