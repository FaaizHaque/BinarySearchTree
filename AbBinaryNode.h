/*
* Title : Binary Search Trees
* Author : Faaiz Ul Haque
* ID: 21503527
* Section : 2
* Assignment : 2
* Description : Questions 2
*/
#ifndef ABBINARYNODE_H
#define ABBINARYNODE_H


class AbBinaryNode
{
    public:
        AbBinaryNode();
        virtual ~AbBinaryNode();


    protected:

    private:
        int item;
        int leftChild;
        int rightChild;
        int index;
        friend class AbBST;
};

#endif // ABBINARYNODE_H
