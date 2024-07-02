#include <iostream>

int main() {
    double a = 123231;
    const double *const ptr = &a; 

    std::cout << "Value of variable a: " 
            << a "Address stored in ptr: " << ptr << std::endl;

    
    return 0;
}
