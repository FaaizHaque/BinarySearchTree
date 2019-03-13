/*
* Title : Binary Search Trees
* Author : Faaiz Ul Haque
* ID: 21503527
* Section : 2
* Assignment : 2
* Description : Questions 2
*/
#include "PbBST.h"
#include <iostream>
#include "analysis.h"
using namespace::std;
int main()
{
    PbBST bst;
    bst.insert(40);
    bst.insert(50);
    bst.insert(45);
    bst.insert(30);
    bst.insert(60);
    bst.insert(55);
    bst.insert(20);
    bst.insert(35);
    bst.insert(10);
    bst.insert(25);

    if ( bst.isValidBST() )
        cout << "BST is a valid BST!" << endl;
    else
        cout << "BST is not a valid BST!" << endl;
    cout << "Median of this BST: " << bst.medianOfBST() << endl;

    performanceAnalysis();
    heightAnalysis();

    return 0;
}
