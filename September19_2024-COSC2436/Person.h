#pragma once

#include<iostream> 
#include<iomanip>

using std::cout; 
using std::left; 
using std::setw; 

/*Person attribs: 
age
name
bankAcctBalance*/
class Person
{
    //cavalier
public: 
    int age;
    std::string name;
    //eugenics 
    double bankAccountBalance;

public:
    Person(int age, std::string name, double bankAccountBalance)
        :age(age), name(name), bankAccountBalance(bankAccountBalance)
    {

    }

    void printPerson()
    {
        std::cout << std::left << std::setw(15);

        std::cout << name;

        std::cout << std::left << std::setw(10);

        std::cout << age;

        std::cout << std::left << std::setw(10);

        std::cout << bankAccountBalance;

        std::cout << "\n";
    }

    //bool hasGreaterMoney

    //operator overloading!
    bool operator < (const Person& otherPerson)
    {
        return (this->bankAccountBalance < otherPerson.bankAccountBalance);
    }

};

bool compareByAge(const Person& p1, const Person& p2)
{
    return (p1.age < p2.age);
}