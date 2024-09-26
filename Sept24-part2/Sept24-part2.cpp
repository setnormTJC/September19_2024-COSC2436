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

template<typename T> 
void printVec(vector<T> listOfThings)
{
    for (const T& thing : listOfThings) {
        std::cout << thing << " ";
    }
}

using std::cout; 

int main()
{
    //A aobj()
    std::vector<int> vec1 = { 1, 3, 5, 7, 9, 11, 17 };

   
    std::random_shuffle(vec1.begin(), vec1.end());
    //std::shuffle(vec1.begin(), vec1.end(), rand());

    cout << "After shuffling, vec1 contains: \n";
    printVec(vec1); 


    std::vector<int> vec2 = { 2, 4, 6, 8, 10, 18 };

    // Vector to hold the merged result
    std::vector<int> mergedVec(vec1.size() + vec2.size());

    // Merging the two sorted vectors
    //std::merge(vec1, vec2); 

    std::merge(vec1.begin(), vec1.end(),
                vec2.begin(), vec2.end(), 
                mergedVec.begin());


    //Displaying the merged vector
    std::cout << "\n\nMerged Vector: ";
    printVec(mergedVec); 

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
