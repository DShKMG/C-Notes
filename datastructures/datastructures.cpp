#include <iostream>
#include <vector>
#include <algorithm>

void arrays()
{
    std::cout << "This part is about array type data structures\n";
    std::cout << "Arrays are elements where they store data in pointers to the starting position\n";
    std::cout << "They sequentially store the data in the given value and we will represent this" << std::endl;
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr;                // Pointer declaration
    ptr = arr;               //
    std::cout << *(ptr + 5); // This pointer points the starting position of the given array and selects elements 5
}

int main(int argc, char const *argv[])
{
    arrays();
    return 0;
}
