#include "Sorting.h"

int CSorting::FindSmallest(const std::vector<int> &Vector)
{
	auto Index = 0;
	
	for (int i = 1; i < static_cast<int>(Vector.size()); i++)
	{
		if (Vector[i] < Vector[Index])
			Index = i;
	}

	return Index;
}

std::vector<int> CSorting::SelectionSortV1(std::vector<int> Vector)
{
	std::vector<int> SortedVector;
	SortedVector.reserve(Vector.size());

	while (!Vector.empty())
	{
		auto SmallestIndex = FindSmallest(Vector);

		SortedVector.push_back(Vector[SmallestIndex]);

		Vector.erase(std::begin(Vector) + SmallestIndex);
	}

	return SortedVector;
}

std::vector<int> CSorting::SelectionSortV2(std::vector<int> Vector)
{
	for (int StartIndex = 0; StartIndex < Vector.size() - 1; StartIndex++)
	{
		int SmallestIndex = StartIndex;

		for (int CurrentIndex = StartIndex + 1; CurrentIndex < Vector.size(); CurrentIndex++)
		{
			if (Vector[CurrentIndex] < Vector[SmallestIndex])
				SmallestIndex = CurrentIndex;
		}

		std::swap(Vector[StartIndex], Vector[SmallestIndex]);
	}

	return Vector;
}