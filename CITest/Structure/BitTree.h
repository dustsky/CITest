#ifndef BITTREE_H
#define BITTREE_H

#include "Defines.h"

typedef struct BitNode{
    ElemType item;
    BitNode *lChild;
    BitNode *rChild;
} BitNode,*BitNodePtr;

class BitTree{
    public:
    void init();
};
#endif
