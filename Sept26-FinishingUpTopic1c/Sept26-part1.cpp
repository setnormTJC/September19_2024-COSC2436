// Sept26-FinishingUpTopic1c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<vector> 
#include<algorithm> 


using std::vector, std::cout, std::string; 


//deprecated (out of date) 
int main()
{
    vector<string> names =
    {
        "Ali",
        "Bob",
        "Car",
        "Dar",
        "Eve"
    };

    //try throw catch
    auto result = std::find_if(names.begin(), names.end(),
        [](string currentName) //anonymous function ("lambda" function)
        {
            return currentName.length() > 3;
        });

    cout << *result << "\n";
    //auto result = std::find(names.begin(), names.end(), "Alice");

    //if (std::find(names.begin(), names.end(), "adsfadsfe") != names.end())
    //{
    //    cout << "asdfasde WAS found\n";
    //}

    //else
    //{
    //    cout << "adsfsdae was NOT found\n";
    //}
    //cout << "result is: " << *result << "\n";
    //int a = 21; 
    //int* ptrToA = &a; 

    //cout << "ptrToA is: " << ptrToA << "\n";
    //cout << "dereferencing the ptr (*ptrToA): " << *ptrToA << "\n";


}
