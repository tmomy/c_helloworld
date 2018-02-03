//
// Created by tmomy on 18-2-2.
//
#include <stdlib.h>
#include <string.h>
#include "bitree.h"

void bitree_init(BitTree *tree, void (*destroy) (void *data)) {
    tree->size = 0;
    tree->destroy = destroy;
    tree->root = NULL;
    return;
}

void bitree_destroy(BitTree *tree) {
    bitree_rem_left(tree, NULL);
    memset(tree, 0, sizeof(BitTree));
    return;
}

int bitree_ins_left(BitTree *tree, BitTreeNode *node, const void *data) {
    BitTreeNode *new_node, **position;
    if (node == NULL) {
        if (bitree_size(tree) > 0)
            return -1;
        position = &tree->root;
    } else {
        if (bitree_left(node) != NULL)
            return -1;
        position = &node->left;
    }
    if ((new_node = (BitTreeNode *)malloc(sizeof(BitTreeNode))) == NULL)
        return -1;
    new_node->data = (void *)data;
    new_node->left = NULL;
    new_node->right = NULL;
    *position = new_node;
    tree->size++;
    return 0;
}

int bitree_ins_right(BitTree *tree, BitTreeNode *node, const void *data) {
    BitTreeNode *new_node, **position;
    if (node == NULL) {
        if (bitree_size(tree) > 0)
            return -1;
        position = &tree->root;
    } else {
        if (bitree_right(node) !=NULL)
            return -1;
        position = &node->right;
    }
    if ((new_node = (BitTreeNode *)malloc(sizeof(BitTreeNode))) == NULL)
        return -1;
    new_node->data = (void *) data;
    new_node->right = NULL;
    new_node->right = NULL;
    *position = new_node;
    tree->size++;
    return 0;
}

void bitree_rem_left (BitTree *tree, BitTreeNode *node) {
    BitTreeNode **position;
    if (bitree_size(tree) == 0)
        return;
    if (node == NULL)
        position = &tree->root;
    else
        position = &node->left;
    if (*position != NULL) {
        bitree_rem_left(tree, *position);
        bitree_rem_right(tree, *position);
        if (tree->destroy != NULL) {
            tree->destroy((*position)->data);
        }
        free(*position);
        *position = NULL;
        tree->size--;
    }
    return;
}