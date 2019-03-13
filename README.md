# BinarySearchTree
Implements and analyzes time complexity of basic binary search tree methods 
Programming language: C++

Classes explanations:
AbBST.cpp: Array based binary search tree
PbBST.cpp: Pointer based binary search tree 


Analysis.cpp: 
Creates 2000 random numbers and inserts them into an empty array-based
BST and an empty pointer-based BST. Calculates the elapsed times to insert
all of those numbers into each BST and output them (for the following sizes:
{4000, 6000, 8000, 10000, 12000, 14000, 16000, 18000, 20000})

Creates 2000 random numbers and inserts them into an empty pointer-based
BST. After inserting all elements into BST, output the height of the tree. Repeat the experiment for the following sizes: {4000, 6000, 8000, 10000, 12000, 14000,
16000, 18000, 20000}

main.cpp: tests functions implemented in all other classes, using random examples.
