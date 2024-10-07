#include <iostream>
#include <vector>

#include "Search/Search.h"
#include "Sorting/Sorting.h"

void Print(std::vector<int> Vector) 
{
    std::cout << "Result: ";

    for (auto &Item : Vector)
        std::cout << Item << " ";

    std::cout << std::endl;
}

int main()
{
    // Search
    {
        std::vector<int> Vector { 1, 3, 5, 7, 9};

        CSearch Search;

        std::cout << "Result: " << Search.BinarySearch(Vector, 3) << std::endl;
        std::cout << "Result: " << Search.BinarySearch(Vector, -2) << std::endl;
    }

    //Sorting
    {
        std::vector<int> Vector { 2, 4, 1, 8, 3, 9, 0};

        CSorting Sorting;

        auto SortedVectorV1 = Sorting.SelectionSortV1(Vector);

        Print(SortedVectorV1);

        auto SortedVectorV2 = Sorting.SelectionSortV2(Vector);

        Print(SortedVectorV2);
    }
}