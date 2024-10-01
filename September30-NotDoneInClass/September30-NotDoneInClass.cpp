// Sept26-part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

#include<vector> 
#include<algorithm> 

#include<cassert>

using std::vector, std::cout, std::string;

/*N^2 for UNSORTED lists!*/
/*@param - first list assume NO duplicates in this */
template<typename T> 
vector<T> mySetIntersection_noSortingRequired(const vector<T>& firstList, const vector<T>& secondList)
{
	vector<T> intersectionList; 

	
	for (int i = 0; i < firstList.size(); i++)
	{
		for (int j = 0; j < secondList.size(); j++)
		{ 
			if (firstList[i] == secondList[j])
			{
				intersectionList.push_back(firstList[i]);
			}
		}
	}
	return intersectionList;
}

/*@param - > Two lists MUST have the same length*/
template<typename T> 
vector<T> mySetIntersection_sortingISrequired(const vector<T>& firstList, const vector<T>& secondList)
{
	vector<T> intersectionList;

	auto firstIt = firstList.begin(); 
	auto secondIt = secondList.begin(); 

	auto elementInFirstList = *firstIt;
	auto elementInSecondList = *secondIt;

	while (firstIt != firstList.end() && secondIt != secondList.end())
	{
		//out of bounds check (don't dereference beyond end of array):
		if (firstIt != firstList.end())
		{
			elementInFirstList = *firstIt;
		}
		if (secondIt != secondList.end())
		{
			elementInSecondList = *secondIt;
		}

		//interesting logic of this function begins here: 
		if (elementInFirstList < elementInSecondList)
			//&& 
			//firstIt != firstList.end())
		{
			//move on to next element in first list
			firstIt++; 
		}

		else if (elementInFirstList > elementInSecondList)
			//&& 
			//secondIt != secondList.end())
		{
			secondIt++; 
		}

		else //add to intersection list if two elements match (are equal) 
		{
			intersectionList.push_back(elementInFirstList); 
			//if (firstIt != firstList.end())
			//{
				firstIt++;
			//}
			//if (secondIt != secondList.end())
			//{
				secondIt++;
			//}

			//(elementInSecondList could be added instead) 
		}
	}

	return intersectionList; 
	//...
};



template<typename T>
void printVec(vector<T> listOfThings)
{
	for (const T& thing : listOfThings) {
		std::cout << thing << " ";
	}
}


int main()
{
	//cout << "adfasdfasdfasdf\n";
	vector<string> appleAttributes =
	{
		"Fruit",
		"Grow on trees",
		"Red",
		"Smooth skin",
		"Okay with cool weather for growing",
		//"Nonsense filler attribute to make lists differ in size ..."
		"Sweet-tastin'"
	};

	vector<string> orangeAttributes =
	{
		"Fruit",
		"Grow on trees", //the intersection of the two sets is not empty 
		"Orange ...",
		"Rough skin",
		"Need warm weather for growing",
		"Sweet-tastin'"
	};


	/*Done AFTER lecture ended -> set_intersection ALSO requires SORTED arrays!*/
	std::sort(appleAttributes.begin(), appleAttributes.end());
	std::sort(orangeAttributes.begin(), orangeAttributes.end());
	/*End "done after lecture"*/


	vector<string> SHAREDattributes; //"intersection"
	
	//auto intersectionList = mySetIntersection_noSortingRequired(appleAttributes, orangeAttributes); 
	auto intersectionList = mySetIntersection_sortingISrequired(appleAttributes, orangeAttributes); 

	printVec(intersectionList);

	//SHAREDattributes.reserve(10); 

	//std::set_intersection(appleAttributes.begin(), appleAttributes.end(),
	//	orangeAttributes.begin(), orangeAttributes.end(), std::back_inserter(SHAREDattributes));


	//auto result = std::set_intersection(appleAttributes.begin(), appleAttributes.end(),
	//	orangeAttributes.begin(), orangeAttributes.end(),
	//	std::back_inserter(SHAREDattributes));

	//cout << result.operator*() <<

	//printVec(SHAREDattributes);


	vector<string> EXCLUSIVEattributes; //"difference" 
	vector<string> ALLattributes; //"union" 





}
