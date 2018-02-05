//
// Created by tmomy on 18-2-2.
//

#ifndef BITREE_BITREE_H
#define BITREE_BITREE_H

#include <zconf.h>

typedef struct BitTreeNode_ {
    void *data;
    struct BitTreeNode_ *left;
    struct BitTreeNode_ *right;
}BitTreeNode;

typedef struct BitTree_ {
    int size;
    int (*compare) (const void *key1, const void *key2);
    void (*destroy) (void *data);
    BitTreeNode * root;
}BitTree;

void bitree_init (BitTree *tree, void (*destroy) (void *data));
void bitree_destroy(BitTree *tree);
int bitree_ins_left(BitTree *tree, BitTreeNode *node, const void *data);
int bitree_ins_right (BitTree *tree, BitTreeNode *node, const void *data);
void bitree_rem_left (BitTree *tree, BitTreeNode *node);
void bitree_rem_right (BitTree *tree, BitTreeNode *node);
int bitree_merge_ (BitTree *merge, BitTree *left, BitTree *right, const void *data);

#define bitree_size(tree) ((tree)->size)
#define bitree_root(tree) ((tree)->root)
#define bitree_is_eob(node)    ((node)==NULL)
#define bitree_is_leaf(node)   ((node)->left == NULL && (node)->right == NULL)
#define bitree_data(node)  ((node)->data)
#define bitree_left(node)  ((node)->left)
#define bitree_right(node) ((node)->right)
#endif //BITREE_BITREE_H
