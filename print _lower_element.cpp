#include <iostream>

int main() {
    const int size = 5;
    int arr[size] = {};

    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int min = arr[0]; 
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    std::cout << "The lowest element is: " << min << std::endl;

    return 0;
}
