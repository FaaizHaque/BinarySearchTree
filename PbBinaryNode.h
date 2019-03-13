/*
* Title : Binary Search Trees
* Author : Faaiz Ul Haque
* ID: 21503527
* Section : 2
* Assignment : 2
* Description : Questions 2
*/
#ifndef PBBINARYNODE_H
#define PBBINARYNODE_H


class PbBinaryNode
{
    public:
        PbBinaryNode();
        virtual ~PbBinaryNode();

    protected:

    private:
        int item;
        PbBinaryNode * left;
        PbBinaryNode * right;
        friend class PbBST;
};

#endif // PBBINARYNODE_H
