#ifndef SORTING_H
#define SORTING_H

#pragma once

#include <vector>

class CSorting
{
public:
	int FindSmallest(const std::vector<int> &Vector);
	std::vector<int> SelectionSortV1(std::vector<int> Vector);
	std::vector<int> SelectionSortV2(std::vector<int> Vector);

};

#endif // SORTING_H