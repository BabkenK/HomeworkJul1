#include <iostream>

int main() {
    const int size = 5;
    int arr[size] = {};

    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int maxIndex = 0; 
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    std::cout << "The max index element is at index: " << maxIndex << std::endl;

    return 0;
}
