#include <iostream>

int main() {
    const int size = 10;
    int arr[size] = {};
    
    std::cout << "Enter " << size << " integers:" << std::endl;
    
    // Input loop
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    
    // Output in reverse order
    std::cout << "Elements in reverse order:" << std::endl;
    for (int i = size - 1; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
