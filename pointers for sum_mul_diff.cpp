
#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    int *ptra = &a;
    int *ptrb = &b;
    
    std::cout << "Please enter the values for first and second integers: \n";
    std::cin >> a >> b;
    int sum = *ptra + *ptrb;
    int mul = *ptra * *ptrb;
    int dif = *ptra - *ptrb;

    
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << mul << std::endl;
    std::cout << "Difference: " << dif << std::endl;

    return 0;
}