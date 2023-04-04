#ifndef _FLY_RED_BLACK_TREE_H_
#define _FLY_RED_BLACK_TREE_H_

#define KEY_TYPE    int
#if 0
#define RBTREE_ENTRY(name,type)\
    struct name                         \
    {                                   \
        struct _rbtree_node*    left;   \
        struct _rbtree_node*    right;  \
        struct _rbtree_node*    parent; \
        unsigned char           color;  \
    }
    
#endif

typedef struct _rbtree_node
{
    /* data */
    KEY_TYPE                key;
    void*                   value;
    
    struct _rbtree_node*    left;   
    struct _rbtree_node*    right;  
    struct _rbtree_node*    parent; 
    unsigned char           color;  
#if 0
    RBTREE_ENTRY(,_rbtree_node) node;
    // RBTREE_ENTRY(,_rbtree_node) node2;
    // RBTREE_ENTRY(,_rbtree_node) node3;
#endif
    
}rbtree_node;

typedef struct _RedBlackTree
{
    /* data */
    rbtree_node *root;
    rbtree_node *nil;

}RedBlackTree;



#endif