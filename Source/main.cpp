#include <iostream>
#include <vector>

#include "Search/Search.h"

int main()
{
    // Search
    {
        std::vector<int> Vector { 1, 3, 5, 7, 9};

        CSearch Search;

        std::cout << "Result: " << Search.BinarySearch(Vector, 3) << std::endl;
        std::cout << "Result: " << Search.BinarySearch(Vector, -2) << std::endl;
    }
}