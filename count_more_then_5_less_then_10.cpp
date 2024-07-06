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
         if (arr[i] > 5 && arr[i] < 10) {
            ++count;  
        }
    }

    
        std::cout << "The numbers of elements greater then 5 and lower then 10 is = " << count << std::endl;
    

    return 0;
}