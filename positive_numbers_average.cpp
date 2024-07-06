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
    int count = 0; 

     for (int i = 0; i < size; ++i) {
         if (arr[i] > 0) {
            sum += arr[i];  
            ++count;  
        }
    }

    if (count > 0) {
         double average = sum / double(count);
        std::cout << "Sum of positive numbers: " << sum << std::endl;
        std::cout << "Average of positive numbers: " << average << std::endl;
    } else {
        std::cout << "No positive numbers entered." << std::endl;
    }

    return 0;
}