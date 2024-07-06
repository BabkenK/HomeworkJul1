#include <iostream>

int main() {
     
    const int size = 10;
    int arr[size] = {};
    
    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        // Check if the number is odd
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }

    std::cout << "Summation of odd elements numbers : " << sum << std::endl;

    return 0;
}
