#include <vector>

int BinarySearch(std::vector<int> Array, int Item)
{
	auto Low = 0;
	auto Hight = Array.size();

	while (Low <= Hight)
	{
		auto Mid = (Low + Hight) / 2;

		auto i = Array[Mid];

		if (i == Item)
			return Mid;

		if (i > Item)
			Hight = Mid - 1;
		else
			Low = Mid + 1;
	}

	return -1;
}