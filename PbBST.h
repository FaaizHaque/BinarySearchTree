/*
* Title : Binary Search Trees
* Author : Faaiz Ul Haque
* ID: 21503527
* Section : 2
* Assignment : 2
* Description : Questions 2
*/
#ifndef PBBST_H
#define PBBST_H
#include "PbBinaryNode.h"


class PbBST
{
    public:
        PbBST();
        virtual ~PbBST();
        void insert( int val );
        int getHeight();
        int getHeightRec( PbBinaryNode * curr );
        bool isValidBST();
        bool isValidRec( PbBinaryNode * curr, int min, int max );
        int medianOfBST();
        void inOrder(PbBinaryNode * curr, int &counter, int &median);
        void inOrder2( PbBinaryNode * curr, int &counter, int &median );

    protected:

    private:
        PbBinaryNode * root;
        int numOfNodes;

};

#endif // PBBST_H
