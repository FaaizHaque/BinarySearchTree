/*
* Title : Binary Search Trees
* Author : Faaiz Ul Haque
* ID: 21503527
* Section : 2
* Assignment : 2
* Description : Questions 2
*/
#include "AbBST.h"

AbBST::AbBST()
{
    root = 0;
    numOfNodes = 0;
    currSize = 2;
    tree = new AbBinaryNode[currSize];
}

AbBST::~AbBST()
{
    //dtor
}

int AbBST :: getHeightRec( int current)
{
    if ( tree[current].index = -1 )
        return 0;
    else
    {
        int heightLeft = getHeightRec(tree[current].leftChild );
        int heightRight = getHeightRec(tree[current].rightChild );
        if ( heightLeft > heightRight )
            return heightLeft + 1 ;
        else
            return heightRight + 1;
    }
}


int AbBST :: getHeight()
{
    return getHeightRec( root );
}

void AbBST :: insert( int val )
{
    if ( numOfNodes == currSize )
    {
        //Create a temporary array with double the size of old array
        AbBinaryNode * temp = new AbBinaryNode[currSize*2];
        //Copy each element into temporary array
        for ( int i = 0; i < currSize; i++ )
        {
            temp[i] = tree[i];
        }
        //New tree is the temporary tree with double the size
        tree = temp;
        //Private variable currSize has doubled
        currSize *= 2;
    }
    //Empty tree
    if ( tree[root].index == -1 )
    {
        tree[root].item = val;
    }
    else
    {
        //Else
        //Start from root index
        int traceIndex = root;
        //currentIndex of the item is the number of nodes being inserted as well
        //i.e 3 nodes present, now we are inserting in 3rd index (so 4 nodes total after insertion)
        int currentIndex = numOfNodes;
        int parentIndex;
        //Will check if node inserted is left child or not (or right child)
        bool leftChild;
        //Keep iterating through loop until we encounter an empty space
        while ( tree[traceIndex].index != -1 )
        {
            //Store parentIndex as currentIndex will change
            parentIndex = traceIndex;
            //If the value is less than the current node go to left sub tree
            if ( val < tree[traceIndex].item )
            {
                traceIndex = tree[traceIndex].leftChild;
                leftChild = true;
            }
            //Else value is greater or equal to current node go to right sub tree
            else
            {
                traceIndex = tree[traceIndex].rightChild;
                leftChild = false;
            }
        }
        //Place value in desired position
        tree[currentIndex].item = val;
        //Set its index to binaryNode
        tree[currentIndex].index = currentIndex;

        //Find out if its a left or right child of its parent
        if ( leftChild )
            tree[parentIndex].leftChild = currentIndex;
        else
            tree[parentIndex].rightChild = currentIndex;
    }
    //NumOfNodes increments by 1
    numOfNodes++;
}


/*void AbBST :: insert( int val )
{
    //Empty tree
    if ( tree[root] == NULL )
    {
        tree[root] = new AbBinaryNode();
        tree[root]->item = val;
    }

    else
    {
        int currentIndex = root;
        int parentIndex;
        bool leftChild;
        //Until we find an empty space to insert new item iterate through loop
        while ( tree[currentIndex] != NULL )
        {
            //If no space left in array
            if ( currentIndex >= currSize )
            {
                //Create a temporary array with double the size of old array
                AbBinaryNode * temp = new AbBinaryNode[currSize*2];
                //Copy each element into temporary array
                for ( int i = 0; i < currSize; i++ )
                {
                    temp[i] = tree[i];
                }
                //New tree is the temporary tree with double the size
                tree = temp;
                //Private variable currSize has doubled
                currSize *= 2;
            }

            //Initially parent index and current index are 0
            parentIndex = currentIndex;
            if (  val < tree[currentIndex]->item )
            {
                //Go to left subtree if val is less than current node
                currentIndex = currentIndex*2 + 1;
                //We know it will be a leftChild right now
                leftChild = true;
            }
            else
            {
                //Else go to right subtree and we know we are at a right child
                currentIndex = currentIndex*2 + 2;
                leftChild = false;
            }
        }
        //We reached a empty space in array
        tree[currentIndex] = new AbBinaryNode();
        tree[currentIndex]->item = val;

        if ( leftChild )
            tree[parentIndex]->leftChild = tree[currentIndex];
        else
            tree[parentIndex]->rightChild = tree[currentIndex];
    }

}*/

