/*
* Title : Binary Search Trees
* Author : Faaiz Ul Haque
* ID: 21503527
* Section : 2
* Assignment : 2
* Description : Questions 2
*/
#include "PbBST.h"
#include <cstddef>
#include <iostream>
#include <limits.h>
using namespace::std;

PbBST::PbBST()
{
    root = NULL;
    numOfNodes = 0;
}

PbBST::~PbBST()
{
    //dtor
}

void PbBST :: insert( int val )
{
    bool leftChild;
    if ( root == NULL )
    {
        root = new PbBinaryNode();
        root->item = val;
    }

    else
    {
        PbBinaryNode * curr = root;
        PbBinaryNode * prev;
        while ( curr != NULL )
        {
            prev = curr;
            if ( val < curr->item )
            {
                curr = curr->left;
                leftChild = true;
            }
            else
            {
                curr = curr->right;
                leftChild = false;
            }
        }
        curr = new PbBinaryNode();
        curr->item = val;

        if ( leftChild )
            prev->left = curr;
        else
            prev->right = curr;

    }
    numOfNodes++;
}

int PbBST :: getHeightRec( PbBinaryNode * curr )
{
    if ( curr == NULL )
        return 0;
    else
    {
        int heightLeft = getHeightRec( curr->left);
        int heightRight = getHeightRec( curr->right);
        if ( heightLeft > heightRight )
            return 1 + heightLeft;
        else
            return 1 + heightRight;
    }
}

int PbBST :: getHeight()
{
    return getHeightRec( root );
}

bool PbBST :: isValidRec( PbBinaryNode * curr, int minVal, int maxVal )
{
    if ( curr == NULL )
        return true;

    if ( curr->item < minVal || curr->item > maxVal )
        return false;

    return ( isValidRec( curr->left, minVal, curr->item)
        && isValidRec(curr->right, curr->item, maxVal) );

}

bool PbBST :: isValidBST()
{
    return ( isValidRec(root, INT_MIN, INT_MAX ) );
}

void PbBST :: inOrder( PbBinaryNode * curr, int &counter, int &median )
{
    if ( curr == NULL )
        return;
    else
    {
        inOrder( (curr->left), counter, median);
        if ( counter == (numOfNodes / 2)  )
        {
            counter = numOfNodes;
            median = ( curr->item );
            return;
        }
        counter++;
        inOrder(curr->right, counter, median);
    }
}
void PbBST :: inOrder2( PbBinaryNode * curr, int &counter, int &median )
{
    if ( curr == NULL )
        return;
    else
    {
        inOrder2( (curr->left), counter, median);
        if ( counter == (numOfNodes / 2) - 1  )
        {
            counter = numOfNodes;
            median = ( curr->item );
            return;
        }
        counter++;
        inOrder2(curr->right, counter, median);
    }
}


int PbBST :: medianOfBST()
{
    int medianEven1 = 0;
    int medianEven2 = 0;
    int counter = 0;

    inOrder ( root, counter, medianEven1 );
    counter = 0;
    inOrder2( root, counter, medianEven2);

    if ( numOfNodes % 2 == 0 )
        return ( ( (medianEven1 + medianEven2 ) / 2 ) );
    else
        return medianEven1;
}
