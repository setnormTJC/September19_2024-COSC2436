// Sept26-part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

#include<vector> 
#include<algorithm> 



using std::vector, std::cout, std::string;



template<typename T>
void printVec(vector<T> listOfThings)
{
	for (const T& thing : listOfThings) {
		std::cout << thing << " ";
	}
}


int main()
{
	vector<string> appleAttributes =
	{
		"Fruit",
		"Grow on trees",
		"Red",
		"Smooth skin", 
		"Okay with cool weather for growing"
	};

	vector<string> orangeAttributes =
	{
		"Fruit",
		"Grow on trees", //the intersection of the two sets is not empty 
		"Orange ...",
		"Rough skin",
		"Need warm weather for growing"
	};


	/*Done AFTER lecture ended -> set_intersection ALSO requires SORTED arrays!*/
	std::sort(appleAttributes.begin(), appleAttributes.end());
	std::sort(orangeAttributes.begin(), orangeAttributes.end());
	/*End "done after lecture"*/


	vector<string> SHAREDattributes; //"intersection"
	//SHAREDattributes.reserve(10); 

	//std::set_intersection(appleAttributes.begin(), appleAttributes.end(),
	//	orangeAttributes.begin(), orangeAttributes.end(), std::back_inserter(SHAREDattributes));
	
	
	auto result = std::set_intersection(appleAttributes.begin(), appleAttributes.end(),
		orangeAttributes.begin(), orangeAttributes.end(),
		std::back_inserter(SHAREDattributes));

	//cout << result.operator*() <<

	printVec(SHAREDattributes); 


	vector<string> EXCLUSIVEattributes; //"difference" 
	vector<string> ALLattributes; //"union" 





}
