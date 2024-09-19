// SimpleLambdaFunctionDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using std::cout; 
using std::vector; 

#include <algorithm> // Add this include for std::count_if

int main()
{
    auto isGreaterThan5 = [](int someNumber)
    {
        return someNumber > 5;
    };

    //cout << "asdfasdf" << typeid(isGreaterThan5).name() << "\n";
        //[](){}
    vector<int> nums = { 123, 4, 5, 6, -1234, 0};
    //nums[0] = 123; 

    //cout << std::boolalpha << isGreaterThan5(-6) << "\n";

    int countGreaterThan5 = std::count_if(nums.begin(), nums.end(), 
        [](int someNumber)
        {
            return someNumber > 5;
        }
        );


    cout << "Count of numbers greater than 5: " << countGreaterThan5 << std::endl;
}
