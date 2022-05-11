//
// Created by Jivesh Mohan on 9/5/22.
//

#ifndef CLOX_NODE_H
#define CLOX_NODE_H

#endif //CLOX_NODE_H

typedef struct NODE
{
    int data;
    struct NODE *next;
} node;

typedef struct
{
    node *head;
};