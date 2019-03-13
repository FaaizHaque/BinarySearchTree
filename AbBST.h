/*
* Title : Binary Search Trees
* Author : Faaiz Ul Haque
* ID: 21503527
* Section : 2
* Assignment : 2
* Description : Questions 2
*/
#ifndef ABBST_H
#define ABBST_H
#include "AbBinaryNode.h"

class AbBST
{
    public:
        AbBST();
        virtual ~AbBST();
        void insert(int val);
        int getHeight();
        int getHeightRec( int current);

    protected:

    private:
        int root;
        int currSize;
        int numOfNodes;
        AbBinaryNode *tree;

};

#endif // ABBST_H
