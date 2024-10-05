#include "Search.h"

int CSearch::BinarySearch(std::vector<int> Vector, int Item)
{
	auto Low = 0;
	auto Hight = static_cast<int>(Vector.size());

	while (Low <= Hight)
	{
		auto Mid = (Low + Hight) / 2;

		if (Vector[Mid] == Item)
			return Mid;

		if (Vector[Mid] > Item)
			Hight = Mid - 1;
		else
			Low = Mid + 1;
	}

	return -1;
}