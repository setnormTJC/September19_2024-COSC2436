// September19_2024-COSC2436.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<algorithm>

#include"Person.h"
#include <vector>
//#include"per"

using std::cout; 



int main()
{
    //int numbers[5] = { 3, 1, 5, 7, 2 };
    ////cout << numbers << "\n";
    ////cout << numbers + 5 << "\n";
    //std::sort(numbers, numbers + 5, std::greater<int>()); 

    //for (int i = 0; i < 5; i++)
    //{
    //    cout << numbers[i] << " ";
    //}
    //cout << "\n";

    Person me{ 36, "Seth Norman", 1'111'111.11 };
    Person she{ 21, "Alice Ames", 999.99 };
    Person thee{ 22, "John Smith",7.01 };
    Person otherPerson{ 12, "Carol Cole", -1234.54 };

    std::vector<Person> people = { me, she, thee, otherPerson };

    std::cout << "The INITIAL order of these people is: \n";
    for (auto& thePerson : people)
    {
        thePerson.printPerson();
    }

    std::sort(people.begin(), people.end());
    std::cout << "\n\nAfter sorting by bank acct balance ...: \n";
    for (auto& thePerson : people)
    {
        thePerson.printPerson();
    }


    cout << "here!" << compareByAge << "\n";

    std::sort(people.begin(), people.end(), compareByAge);

    std::cout << "\n\nAfter sorting by age? ...: \n";
    for (auto& thePerson : people)
    {
        thePerson.printPerson();
    }

    std::sort(people.begin(), people.end(), []
    (const Person& p1, const Person& p2)
        {
            return p1.name > p2.name; 
        });

    std::cout << "\n\nAfter sorting by NAME (with an \"anonymous\" function) ...: \n";
    for (auto& thePerson : people)
    {
        thePerson.printPerson();
    }




}
