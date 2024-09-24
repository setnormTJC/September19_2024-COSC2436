// Sept24-part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include <algorithm> // Add this include for std::merge


#include"C:/Users/Work/Desktop/myCppLibrary/algos/quickSort.h"
//class A
//{
//
//};
int main()
{
    //A aobj()
    std::vector<int> vec1 = { 1, 3, 5, 7, 9 };
    std::vector<int> vec2 = { 2, 4, 6, 8, 10 };

    // Vector to hold the merged result
    std::vector<int> mergedVec(vec1.size() + vec2.size());

    // Merging the two sorted vectors
    //std::merge(vec1, vec2); 

    std::merge(vec1.begin() + 1, vec1.end(), vec2.begin(), vec2.end(), mergedVec.begin());

    //Displaying the merged vector
    std::cout << "Merged Vector: ";
    for (const int& num : mergedVec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    //vector<int> unsortedNums = { 8, 6, 7, 5, 3, 0, 9, 1 }; 
    //edge case 

    //using namespace MySpace::Algos; //
    //quickSort(unsortedNums, 0, unsortedNums.size() - 1) ;   
    ////std::sort()
    //for (int i = 0; i < unsortedNums.size(); i++)
    //{
    //    std::cout << unsortedNums[i] << " ";
    //}

//    std::cout << "\n";
    //quickSort
}
