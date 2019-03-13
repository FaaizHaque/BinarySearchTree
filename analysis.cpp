#include "analysis.h"
/*
* Title : Binary Search Trees
* Author : Faaiz Ul Haque
* ID: 21503527
* Section : 2
* Assignment : 2
* Description : Part 2e and 2f
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "AbBST.h"
#include "PbBST.h"
#include <iomanip>
using namespace::std;


void performanceAnalysis()
{
    int sizes[10] = {2000, 4000, 6000, 8000, 10000, 12000, 14000, 16000, 18000, 20000 };

    AbBST arrayBST;
    PbBST pointerBST;

    cout << "___________________________________________________________________________________________" << endl;
    cout << endl;
    cout << "Part e - Performance Analysis of BST implementations " << endl;
    cout << " --------------------------------------------------------------------------------------- " << endl;
    cout << setw(10) << " Array Size " << setw(10) << " Array Based " << setw(10) << " Pointer Based  " << endl;
    cout << " --------------------------------------------------------------------------------------- " << endl;
    for ( int j = 0; j < 10; j++ )
    {
        double duration1;
        clock_t startTime1 = clock();
        for ( int i = 0; i < sizes[j]; i++ )
        {
            int temp = rand()%sizes[j];
            arrayBST.insert( temp );
        }
        duration1 = 1000 * double( clock() - startTime1 ) / CLOCKS_PER_SEC;

        double duration2;
        clock_t startTime2 = clock();
        for ( int i = 0; i < sizes[j]; i++ )
        {
            int temp = rand()%sizes[j];
            pointerBST.insert( temp );
        }
        duration2 = 1000 * double( clock() - startTime2 ) / CLOCKS_PER_SEC;

        cout << setw(10) << sizes[j] << setw(10) << duration1 << " ms " << setw(10) << duration2 << " ms " <<  endl;
        AbBST newBST;
        arrayBST = newBST;
        PbBST newerBST;
        pointerBST = newerBST;
    }
    cout << endl;
    cout << "___________________________________________________________________________________________" << endl;

}
void heightAnalysis()
{
    int sizes[10] = {2000, 4000, 6000, 8000, 10000, 12000, 14000, 16000, 18000, 20000 };

    cout << "___________________________________________________________________________________________" << endl;
    cout << endl;
    cout << "Part f - Analysis of BST height " << endl;
    cout << " --------------------------------------------------------------------------------------------- " << endl;
    cout << setw(10) << " Array Size " << setw(10) << " Random Numbers " << setw(10) << " Ascending Numbers " << endl;
    cout << " ----------------------------------------------------------------------------------------------" << endl;

    for ( int j = 0; j < 10; j++ )
    {
        PbBST randomBST;
        PbBST ascendingBST;
        for ( int i = 0; i < sizes[j]; i++ )
        {
            int temp = rand()%sizes[j];
            randomBST.insert( temp );
        }

        for ( int i = 0; i < sizes[j]; i++ )
        {
            ascendingBST.insert( i );
        }

        cout << setw(10) << sizes[j] << setw(10) << randomBST.getHeight() << setw(20) << ascendingBST.getHeight() <<  endl;
    }
    cout << endl;
    cout << "___________________________________________________________________________________________" << endl;
}

