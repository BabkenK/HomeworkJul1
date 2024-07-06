#include <iostream>

int main() {
     
    const int size = 10;
    int arr[size] = {};
    
    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    
    int oddCount = 0;

    // Loop through each element in the array
    for (int i = 0; i < size; ++i) {
        // Check if the number is odd
        if (arr[i] % 2 != 0) {
            ++oddCount;
        }
    }

    // Output the result
    std::cout << "Number of odd numbers in the array: " << oddCount << std::endl;

    return 0;
}

