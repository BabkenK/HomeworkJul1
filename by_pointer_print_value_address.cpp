
#include <iostream>

int main() {
    int a = 0;
    int *ptra = &a;

    std::cout << "Please enter the value: \n";
    std::cin >> a;
    
    std::cout << *ptra <<" "<< ptra <<std::endl;

    
    return 0;
}